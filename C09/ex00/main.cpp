#include "BitcoinExchange.hpp"
#include <fstream>
#include <sys/stat.h>

void	check_file(std::ifstream &file)
{
	struct stat	statbuf;

	if (!file.is_open())
		throw std::runtime_error("Error : could not open file.");
	if (statbuf.st_size == 0)
		throw std::runtime_error("Error : file is empty.");
	if (statbuf.st_mode & S_IFDIR)
		throw std::runtime_error("Error : file is a directory.");
}
void ff(){
    system("leaks btc");
}
int	main(int ac, char **av)
{
    atexit(ff);
	if (ac > 2)
	{
		std::cout << "Error : Wrong argument" << std::endl;
		return (1);
	}
	std::ifstream file(av[1]);
	try
	{
		check_file(file);
		BitcoinExchange exchange;
		exchange.read(file);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}