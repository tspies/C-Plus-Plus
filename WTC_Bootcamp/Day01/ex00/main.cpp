#include <iostream>
#include "Pony.hpp"

void ponyHeap(void)
{
    // Creating a "new" Pony on the heap
    // Note that Blossom is a pointer, '->' have to be used to access fcuntions
    Pony *Blossom = new Pony();

    // Setting up vlaue for Blossom
    Blossom->unicornBlessing(0);
    Blossom->iDubThee("Blossom");
    Blossom->colourSplash("Pink");
    Blossom->bodySize("Small");

    //getting values '->' used again because blossomisa pointer to Pony Instance
    std::cout << "   " << Blossom->titleRecall() << ": -- HEAP\n";
    std::cout << "     " << Blossom->titleRecall() << " is a " << Blossom->getSize() << " Pony\n";
    std::cout << "     " << Blossom->titleRecall() << " is " << Blossom->colourMe() << " and" << Blossom->iRUnicorn() << std::endl;
    std::cout << std::endl;
    // Heap object has to be manually deleted to free heap memory
    delete Blossom;
}

// Allocating on the stack, now "new" command used
void ponyStack(void)
{
    Pony Bubbles;

    // Setting valus for Bubbles
    Bubbles.unicornBlessing(1);
    Bubbles.iDubThee("Bubbles");
    Bubbles.colourSplash("Blue");
    Bubbles.bodySize("Large");

    // getting values
    std::cout << "   " << Bubbles.titleRecall() << ": -- STACK\n";
    std::cout << "     " << Bubbles.titleRecall() << " is a " << Bubbles.getSize() << " Pony\n";
    std::cout << "     " << Bubbles.titleRecall() << " is " << Bubbles.colourMe() << " and" << Bubbles.iRUnicorn() << std::endl;
    std::cout << std::endl;
}

int main(void)
{
    ponyHeap();
    ponyStack();
    return 0;
}