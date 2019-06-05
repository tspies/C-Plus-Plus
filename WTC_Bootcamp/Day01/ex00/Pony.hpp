#ifndef PONY_HPP
#define PONY_HPP

    #include <iostream>

    class Pony{
        public:
            Pony(void);
            ~Pony(void);
            // Set value functions (names are for fun, Not functionality)
            void unicornBlessing(int x);
            void colourSplash(std::string splash);
            void iDubThee(std::string name);
            void bodySize(std::string size);

            //Get value functions (Names are for fun, not funtionality)
            std::string iRUnicorn(void);
            std::string colourMe(void);
            std::string titleRecall(void);
            std::string getSize(void);
        private:
            bool is_unicorn;
            std::string colour;
            std::string name;
            std::string size;
    };
#endif