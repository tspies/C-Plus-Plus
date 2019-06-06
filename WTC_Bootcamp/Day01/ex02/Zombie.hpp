#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
 #include <string>
	class Zombie 
	{
		public:
		Zombie(std::string, std::string);
		~Zombie();
		std::string announce(void);

		private:
		std::string type;
		std::string name;
	};
#endif