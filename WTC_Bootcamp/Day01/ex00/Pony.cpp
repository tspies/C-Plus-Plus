    #include <iostream>
    #include "Pony.hpp"

// Constructor and destructor
    Pony::Pony()
    {
        std::cout << "\n\nAllocating space for Pony's -- Constructor\n\n";
        return ;
    }
    Pony::~Pony()
    {
        std::cout << "Kicking Pony's to the curb -- Destructor\n";
        return ;
    }
// Setting values of Pony
    void Pony::unicornBlessing(int x)
    {
        is_unicorn = x;
    }
    void Pony::colourSplash(std::string splash)
    {
        colour = splash;
    }
    void Pony::iDubThee(std::string title)
    {
        name = title;
    }
    void Pony::bodySize(std::string build)
    {
        size = build;
    }

// Getting values of Pony
    std::string Pony::iRUnicorn(void)
    {
        if (is_unicorn == 1)
            return (" is a unicorn");
        else
            return (" is not a unicorn");
    }
    std::string Pony::colourMe(void)
    {
        return (colour);
    }
    std::string Pony::titleRecall(void)
    {
        return (name);
    }
    std::string Pony::getSize(void)
    {
        return (size);
    }