#ifndef ZOMBIEEVENT_HPP
 #define ZOMBIEEVENT_HPP
 #include "Zombie.hpp"
	class ZombieEvent
	{
		public:
			ZombieEvent();
			~ZombieEvent();
			void setZombieType(std::string varType);
			Zombie* newZombie(std::string name);
			Zombie* randomChump(void);
		private:
		std::string zom_type;
	};
#endif