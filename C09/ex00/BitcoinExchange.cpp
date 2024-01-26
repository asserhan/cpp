#include "BitcoinExchange.hpp"

BitcoinExchange :: BitcoinExchange(){
    std::ifstream file("data.csv");
    if(!file.is_open() || file.fail() || is_empty(file)){
        std::cout<<"Error : could not open file."<<std::endl;
        exit(1);
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &oobj){
    (*this)=oobj;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &oobj){
    this->data = oobj.data;
    return(*this);
}
bool is_empty(std::ifstream &file){
    return(file.peek() == std::ifstream::traits_type::eof());
}
