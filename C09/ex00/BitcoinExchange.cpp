#include "BitcoinExchange.hpp"

BitcoinExchange ::BitcoinExchange()
{
	double	value;

	std::ifstream file("data.csv");
	if (!file.is_open())
	{
		std::cout << "Error : could not open file." << std::endl;
		exit(1);
	}
	else
	{
		std::string line;
		std::getline(file, line);
		if (line != "date,exchange_rate")
		{
			std::cout << "Error : bad file." << std::endl;
			exit(1);
		}
		while (std::getline(file, line))
		{
			std::string key = line.substr(0, line.find(','));
			std::string value_str = line.substr(line.find(',') + 1,
					line.size());
			value = std::atof(value_str.c_str());
			this->data[key] = value;
		}
		file.close();
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &oobj)
{
	(*this) = oobj;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &oobj)
{
	this->data = oobj.data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

std::string skip_spaces(std::string &line)
{
	size_t	start;
	size_t	end;

	start = line.find_first_not_of(" \t");
	end = line.find_last_not_of(" \t");
	if (start == std::string::npos)
		return ("");
	return (line.substr(start, end - start + 1));
}

std::string *split_line(std::string line)
{
	size_t	pos;

	pos = line.find('|');
	if (pos == std::string::npos)
		throw std::runtime_error("Error : bad input => " + line);
	std::string *splited = new std::string[2];
	if(splited == NULL)
		throw std::runtime_error("Error : bad allocation");
	splited[0] = line.substr(0, pos);
	splited[1] = line.substr(pos + 1);
	return (splited);
}

void	check_date(std::string &date)
{
	int	year;
	int	month;
	int	day;

	date = skip_spaces(date);
	if (date.empty() || date.size() != 10 || date[4] != '-' || date[7] != '-')
		throw std::runtime_error("Error : bad date");
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue ;
		if (!isdigit(date[i]))
			throw std::runtime_error("Error : bad date");
	}
	year = atoi(date.substr(0, 4).c_str());
	month = atoi(date.substr(5, 2).c_str());
	day = atoi(date.substr(8, 2).c_str());
	if (year < 0 || year > 2024 || month < 1 || month > 12 || day < 1
		|| day > 31)
		throw std::runtime_error("Error : bad date");
	if (month == 2 && year % 4 != 0 && day >= 29)
		throw std::runtime_error("Error : bad date");
	if (month == 2 && year % 4 == 0 && day >= 30)
		throw std::runtime_error("Error : bad date");
	if (month % 2 == 0 && day >= 31)
		throw std::runtime_error("Error : bad date");
}
double	check_value(std::string &value)
{
	double	val;

	value = skip_spaces(value);
	if (value.empty())
		throw std::runtime_error("Error : bad value");
	if (value.size() == 1 && (value[0] == '-' || value[0] == '+'))
		throw std::runtime_error("Error : bad value");
	for (size_t i = 0; i < value.size(); i++)
	{
		if (std::count(value.begin(), value.end(), '.') > 1)
			throw std::runtime_error("Error : bad value");
		if (i == 0 && (value[i] == '-' || value[i] == '+'))
			continue ;
		if (!isdigit(value[i]) && value[i] != '.')
			throw std::runtime_error("Error : bad value");
		if (value[i] == '.' && i == value.size() - 1)
			throw std::runtime_error("Error : bad value");
	}
	val = atof(value.c_str());
	if (val < 0)
		throw std::runtime_error("Error : not a positive number");
	if (val > 1000)
		throw std::runtime_error("Error : too large a number");
	return (val);
}

double BitcoinExchange::get_bitcoin_Ex(std::string &date, std::string &value)
{
	double	val;
	check_date(date);
	val = check_value(value);
	if (date < data.begin()->first)
	{
		throw std::runtime_error("Error : date out of range");
	}
	if (date > data.rbegin()->first)
		return (val * data.rbegin()->second);
	std::map<std::string, double>::iterator it = data.lower_bound(date);
	if (it != data.end() && it->first == date)
		return (val * it->second);
	--it;
	return (val * it->second);
}
void BitcoinExchange::read(std::istream &file)
{
	double	val;
	double	res;

	std::string line;
	std::getline(file, line);
	if (line != "date | value" )
		throw std::runtime_error("Error : bad file");
	while (!file.eof())
	{
		std::getline(file, line);
		std::string *splited = NULL;
		try
		{
			splited = split_line(line);
			check_date(splited[0]);
			val = check_value(splited[1]);
			res = get_bitcoin_Ex(splited[0], splited[1]);
			std::cout << splited[0] << " => " << val << " = " << res << std::endl;
		}
		catch (std::runtime_error &e)
		{
			delete[] splited;
			std::cout << e.what() << std::endl;
			continue ;
		}
		delete[] splited;
	}
}
