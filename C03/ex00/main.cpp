#include "ClapTrap.hpp"

int main(){
    
    ClapTrap a ("player 1");
    ClapTrap b("player 2");
    a.attack("player 2");
    a.takeDamage(10);
    a.beRepaired(100);
    b.attack("player 1");
    std :: cout << b.getEpoint() << std::endl;
    a.attack("player 2");
    std :: cout << a.getEpoint() << std::endl;
    std :: cout << a.getHpoint() << std::endl;
    b.takeDamage(100);
    std :: cout << b.getHpoint() << std::endl;
    a.takeDamage(100);
    a.takeDamage(0);

}
   