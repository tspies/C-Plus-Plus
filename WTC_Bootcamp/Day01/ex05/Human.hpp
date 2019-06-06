#ifndef HUMAN_HPP
 #define HUMAN_HPP
    #include <iostream>
    #include "Brain.hpp"
    class Human
    {
        public:
            std::string identify();
            Brain getBrain();
        private:
            Brain mySmallBrain;
    };
#endif