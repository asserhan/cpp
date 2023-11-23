#include "DiamondTrap.hpp"

int main(){
    DiamondTrap a("player1");
    DiamondTrap b("player2");
    a.attack("player2");
    std::cout<<a.getEpoint()<<std::endl;
    a.highFivesGuys();
    a.takeDamage(10);
    std::cout<<a.getHpoint()<<std::endl;
    a.beRepaired(10);
    b.attack("player1");
    b.takeDamage(10);
    std::cout<<a.getEpoint()<<std::endl;
    std::cout<<a.getHpoint()<<std::endl;
    std::cout<<a.getDpoint()<<std::endl;
    b.whoAmI();
}
   