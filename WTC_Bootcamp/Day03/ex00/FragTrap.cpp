#include <iostream>
#include "FragTrap.hpp"

//Contructors
    FragTrap::FragTrap(std::string name)
    {
        std::cout << "---DEFAULT CONSTRUCTOR---\n";
        std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\n";
        this->_hitPoints = 100;
        this->_maxHitPoints = 100;
        this->_energyPoints = 100;
        this->_maxEnergyPoints = 100;
        this->_level = 1;
        this->_name = name;
        this->_meleeAttackDamage= 30;
        this->_rangedAttackDamage = 20;

    }
    FragTrap::~FragTrap()
    {
        std::cout << "---DESTRUCTOR---\n";
    }
    FragTrap::FragTrap(const FragTrap &frag)
    {
        std::cout << "---COPY CONSTRUCTOR---\n";
    }
//-------------------------------------------------------------------
//Attack functions
    void FragTrap::rangedAttack(std::string const name, FragTrap target)
    {
        if (this->_energyPoints - 10 < 0)
        {
            std::cout << this->_name << " has run out of energy!\n";
        }
        else
        {
            std::cout << "FR4G-TP " << this->_name << " attacks " << target._name << " at range, causing 20 points of damage!\n";
            target.takeDamage(this->_rangedAttackDamage);
        }
    }
    void FragTrap::meleeAttack(std::string const name, FragTrap target)
    { 
        if (this->_energyPoints - 10 < 0)
        {
            std::cout << this->_name << " has run out of energy!\n";
        }
        else
        {
            std::cout << "FR4G-TP " << this->_name << " attacks " << target._name << " at range, causing 30 points of damage!\n";
            target.takeDamage(this->_meleeAttackDamage);
        }
    }
    void FragTrap::headButt(std::string const nam, FragTrap target)
    {
        if (this->_energyPoints - 10 < 0)
        {
            std::cout << this->_name << " has run out of energy!\n";
        }
        else
        {
            std::cout << "FR4G-TP " << this->_name << " attacks " << target._name << " witha head-butt causing 15 points of damage!\n";
            target.takeDamage(this->_headButtDamage);
        }
    }
    void FragTrap::pulseLazer(std::string const nam, FragTrap target)
    {
        if (this->_energyPoints - 10 < 0)
        {
            std::cout << this->_name << " has run out of energy!\n";
        }
        else
        {
            std::cout << "FR4G-TP " << this->_name << " attacks " << target._name << " with lazer pulse, causing 25 points of damage!\n";
            target.takeDamage(this->_pulseLazerdamage);
        }
    }
    void FragTrap::insultToMother(std::string const nam, FragTrap target)
    {
        if (this->_energyPoints - 10 < 0)
        {
            std::cout << this->_name << " has run out of energy!\n";
        }
        else
        {
            std::cout << "FR4G-TP " << this->_name << " attacks " << target._name << "with an insult to their Mother, causing 5 points of damage!\n";
            target.takeDamage(this->_motherInsultDamage);
        }
    }
    void FragTrap::vaulhunter_dot_exe(std::string const name, FragTrap target)
    {

    }
//-------------------------------------------------------------------
//Modifying functions
    void FragTrap::takeDamage(unsigned int amount)
    {
        if (this->_hitPoints - amount < 0)
        {
            std::cout << this->_name << " has hit 0 HP and died! :(\n";
            this->_hitPoints = 0;
        }
        else
            this->_hitPoints -= amount; 
    }
    void FragTrap::beRepaired(unsigned int amount)
    {
        if (this->_energyPoints + 40 > this->_maxEnergyPoints)
        {
            std::cout << this->_name << " is at MAX ENERGY!\n";
            this->_energyPoints = 100;
        }
        else
            this->_energyPoints += 40;
        if (this->_energyPoints + 40 > this->_maxEnergyPoints)
        {
            std::cout << this->_name << " is at MAX HP!\n";
            this->_energyPoints = 100;
        }
        else
            this->_energyPoints += 40;
         std::cout << this->_name << " Repaired for 40 Energy & 40 HP\n";
    }
    std::string FragTrap::fetchName(void)
    {
        return(this->_name);
    }