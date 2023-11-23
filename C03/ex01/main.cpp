#include "ScavTrap.hpp"

int main(){
    ScavTrap a("player1");
    ScavTrap b("player2");
    ScavTrap c(a);
    a.attack("player2");
    std::cout<<a.getEpoint()<<std::endl;
    a.guardGate();
    a.takeDamage(10);
    std::cout<<a.getHpoint()<<std::endl;
    a.beRepaired(10);
    std::cout<<a.getEpoint()<<std::endl;
    std::cout<<a.getHpoint()<<std::endl;
    std::cout<<a.getDpoint()<<std::endl;
    std::cout<<c.getDpoint()<<std::endl;
}
   