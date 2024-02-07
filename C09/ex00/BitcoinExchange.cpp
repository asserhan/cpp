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
        while(std::getline(file,line)){
            std::string key = line.substr(0,line.find(','));
            std::string value_str = line.substr(line.find(',')+1);
            float value = std::stof(value_str);
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
    if(date.empty() || date.size() != 10){
        throw std::runtime_error("Error : bad date");
    }

}
void get_bitcoin(std::string &date,std::string &value){
    check_date(date);
    (void)value;
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
            get_bitcoin(splited[0],splited[1]);
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
