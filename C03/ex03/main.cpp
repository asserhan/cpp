#include "FragTrap.hpp"

int main(){
    FragTrap a("player1");
    FragTrap b("player2");
    FragTrap c(a);
    a.attack("player2");
    std::cout<<a.getEpoint()<<std::endl;
    a.highFivesGuys();
    a.takeDamage(10);
    std::cout<<a.getHpoint()<<std::endl;
    a.beRepaired(10);
    std::cout<<a.getEpoint()<<std::endl;
    std::cout<<a.getHpoint()<<std::endl;
    std::cout<<a.getDpoint()<<std::endl;
    std::cout<<c.getDpoint()<<std::endl;
}
   