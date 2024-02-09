#include "BitcoinExchange.hpp"

BitcoinExchange :: BitcoinExchange(){
    std::ifstream file("data.csv");
    if(!file.is_open() ){
        std::cout<<"Error : could not open file."<<std::endl;
        exit(1);
    }
    else{
        std::string line;
        std::getline(file,line);
        if(line != "date,exchange_rate"){
            std::cout<<"Error : bad file."<<std::endl;
            exit(1);
        }
        while(std::getline(file,line)){
            std::string key = line.substr(0,line.find(','));
            std::string value_str = line.substr(line.find(',')+1);
            double value = std::stod(value_str);
            this->data[key] = value;
        }    
        file.close();  
    }
 
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &oobj){
    (*this)=oobj;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &oobj){
    this->data = oobj.data;
    return(*this);
}

BitcoinExchange::~BitcoinExchange(){
   
}

std::string skip_spaces(std::string &line){
    size_t start = line.find_first_not_of(" \t");
    size_t end = line.find_last_not_of(" \t");
    if(start == std::string::npos)
        return "";
    return line.substr(start,end-start+1);
}
       

std::string *split_line(std::string line){
    std::string *splited = new std::string[2];
    size_t pos = line.find('|');
    if(pos == std::string::npos){
        delete[] splited;
        throw std::runtime_error("Error : bad input => "+line);
    }
    splited[0] = line.substr(0,pos);
    splited[1] = line.substr(pos+1);
    return splited;
}

void check_date(std::string &date)
{
    date=skip_spaces(date);
    if(date.empty() || date.size() != 10 || date[4] != '-' || date[7] != '-'){
        throw std::runtime_error("Error : bad date");
    }
    for(int i=0;i<10;i++){
        if(i == 4 || i == 7)
            continue;
        if(!isdigit(date[i])){
            throw std::runtime_error("Error : bad date");
        }
    }
    int year = atoi(date.substr(0,4).c_str());
    int month = atoi(date.substr(5,2).c_str());
    int day = atoi(date.substr(8,2).c_str());
    if(year < 0 || year > 2024 || month < 1 || month > 12 || day < 1 || day > 31){
        throw std::runtime_error("Error : bad date");
    }
    if(month == 2 && year % 4 == 0 && day > 29){
        throw std::runtime_error("Error : bad date");
    }
}
double check_value(std::string &value){
    value=skip_spaces(value);
    if(value.empty()){
        throw std::runtime_error("Error : bad value");
    }
    for(size_t i=0;i<value.size();i++){
        if(i == 0 && value[i] == '-')
            continue;
        if(!isdigit(value[i]) && value[i] != '.'){
            throw std::runtime_error("Error : bad value");
        }
    }
    double val = std::stod(value);
    if (val < 0){
        throw std::runtime_error("Error : not a positive number");
    }
    if(val >= INT_MAX)
        throw std::runtime_error("Error : too large a number");
    return val;
}

double BitcoinExchange:: get_bitcoin_Ex(std::string &date,std::string &value){
    check_date(date);
    double val = std::stod(value);
    double res ;
    for(std::map<std::string,double>::iterator it = this->data.begin();it != this->data.end();it++){
        if(it->first.compare(date) == 0){
            res= (it->second * val);
            break;
        }
        else{
            res = -1;
        }
    }
    return res;
}
void BitcoinExchange::read(std::istream &file){
    std::string line;
    std::getline(file,line);
    if(line != "date | value"){
        throw std::runtime_error("Error : bad file");
    }
    while(!file.eof())
    {
        std::getline(file,line);
        std::string *splited = NULL;
        try{
            splited = split_line(line);
             check_date(splited[0]);
            check_value(splited[1]);
            double res = get_bitcoin_Ex(splited[0],splited[1]);
            std::cout<<splited[0]<<" => "<<splited[1]<<" = "<<res<<std::endl;
        }
        catch(std::runtime_error &e){
            std::cout<<e.what()<<std::endl;
            continue;
        }

    }
     
}
bool is_empty(std::ifstream &file){
    return(file.peek() == std::ifstream::traits_type::eof());
}
