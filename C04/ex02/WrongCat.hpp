#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &oobj);
	WrongCat &operator=(const WrongCat &oobj);
   void makeSound()const;
};
#endif