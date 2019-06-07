#ifndef FIXED_HPP
 #define FIXED_HPP
	#include<iostream>
	#include <string>
    class FragTrap
    {
        private:
            int _hitPoints;
            int _maxHitPoints;
            int _energyPoints;
            int _maxEnergyPoints;
            int _level;
            int _meleeAttackDamage;
            int _rangedAttackDamage;
            int _headButtDamage;
            int _motherInsultDamage;
            int _pulseLazerdamage;
            int _armorDamageReduction;
            std::string _name;


        public:
            FragTrap();
            FragTrap(std::string name);
            ~FragTrap();
            FragTrap(const FragTrap &frag);
            std::string fetchName(void);
            void rangedAttack(std::string const &target);
            void meleeAttack(std::string const &target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            void headButt(std::string const &target);
            void pulseLazer(std::string const &target);
            void insultToMother(std::string const &target);
            void vaulhunter_dot_exe(std::string const &target);
            FragTrap &operator=(const FragTrap &Frag);
    };
#endif