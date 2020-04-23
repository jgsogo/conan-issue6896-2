#include <iostream>
#include "say.h"

int say(){
    #ifdef NDEBUG
    std::cout << "Say Release!" <<std::endl;
    #else
    std::cout << "Say Debug!" <<std::endl;
    #endif
    return 42;
}
