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
// void skip_spaces(std::string line){
       
// }
void split_line(std::string line){
    std::cout << line << std::endl;
    std::string splited[2];
    if(line.find('|') == 0 || line.find('|') == line.size()-1 || std::count(line.begin(),line.end(),'|') != 1)
        throw std::runtime_error("Error : bad input => "+line);
}
void BitcoinExchange::read(std::istream &file){
    std::string line;
    std::getline(file,line);
    if(line != "date | value"){
        throw std::runtime_error("Error : bad file");
    }
   // std::map<std::string,float> input_data;
    while(std::getline(file,line))
    {
        split_line(line);
    }
     
}
bool is_empty(std::ifstream &file){
    return(file.peek() == std::ifstream::traits_type::eof());
}
