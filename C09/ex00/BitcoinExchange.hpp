#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <string>
#include <map>
#include <fstream>
class BitcoinExchange {
    private:
    std::map<std::string,float> data;
    public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &oobj);
    BitcoinExchange &operator=(const BitcoinExchange &oobj);
    ~BitcoinExchange();
    void read(std::istream &file);
    void print();
};
bool is_empty(std::ifstream &file);
#endif
