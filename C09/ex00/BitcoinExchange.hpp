#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <ctime>
#include <limits.h>
class BitcoinExchange {
    private:
    std::map<std::string,double> data;
    public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &oobj);
    BitcoinExchange &operator=(const BitcoinExchange &oobj);
    ~BitcoinExchange();
    void read(std::istream &file);
    double get_bitcoin_Ex(std::string &date,std::string &value);
    void print();
};
bool is_empty(std::ifstream &file);
#endif
