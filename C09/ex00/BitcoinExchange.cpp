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
int get_year(std::string date){
   std::string year_str = date.substr(0,4);
   int year = std::atoi(year_str.c_str());
    if(year < 0 || year > 2024 || year_str.empty()){
        throw std::runtime_error("Error : bad year");
    }
    return year;
}
int get_month(std::string date){
    std::string month_str = date.substr(5,2);
    int month = std::atoi(month_str.c_str());
    if(month < 1 || month > 12 || month_str.empty()){
        throw std::runtime_error("Error : bad month");
    }
    return month;
}
int get_day(std::string date){
    std::string day_str = date.substr(8,2);
    int day = std::atoi(day_str.c_str());
    if(day_str.empty() || day < 1 || day > 31){
        throw std::runtime_error("Error : bad day");
    }
    if(get_month(date) == 2 && get_year(date) % 4 == 0 && day > 29){
        throw std::runtime_error("Error : bad day");
    }
    return day;
}
time_t get_date(std::string date){
    struct tm tm;
   bzero(&tm,sizeof(tm));
   tm.tm_year = get_year(date) - 1900;
   tm.tm_mon = get_month(date) - 1;
   tm.tm_mday = get_day(date);
    return mktime(&tm);
}
float get_value(std::string value){
    float value_float = std::stof(value);
    
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
}
void check_value(std::string &value){
    value=skip_spaces(value);
    if(value.empty()){
        throw std::runtime_error("Error : bad value");
    }
    for(int i=0;i<value.size();i++){
        if(i == 0 && value[i] == '-')
            continue;
        if(!isdigit(value[i]) && value[i] != '.'){
            throw std::runtime_error("Error : bad value");
        }
    }
}
void get_bitcoin(std::string &date,std::string &value){
    check_date(date);
    check_value(value);
    time_t date_time = get_date(date);
    float value_float = get_value(value);
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
