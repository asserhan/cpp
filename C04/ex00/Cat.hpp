#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
class Cat : public Animal
{
	public:
	Cat();
	~Cat();
	Cat(const Cat &oobj);
	Cat &operator=(const Cat &oobj);
   void makeSound()const;
};
#endif
