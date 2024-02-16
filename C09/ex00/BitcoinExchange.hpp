#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <ctime>
# include <fstream>
# include <iostream>
# include <limits.h>
# include <map>
# include <string>
class BitcoinExchange
{
  private:
	std::map<std::string, double> data;

  public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &oobj);
	BitcoinExchange &operator=(const BitcoinExchange &oobj);
	~BitcoinExchange();
	void read(std::istream &file);
	double get_bitcoin_Ex(std::string &date, std::string &value);
	void print();
};
bool	is_empty(std::ifstream &file);
#endif
