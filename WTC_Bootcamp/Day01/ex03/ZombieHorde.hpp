#ifndef ZOMBIEHORDE_HPP
 #define ZOMBIEHORDE_HPP
 #include "Zombie.hpp"

    class ZombieHorde
    {
        public:
            ZombieHorde(int N);
            ~ZombieHorde();
            std::string randomChump(int index);
            void announce();

        private:
            int hordeCount;
            Zombie *zombieArray;
    };
#endif