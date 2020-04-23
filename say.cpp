#include <iostream>
#include "say.h"

void say(){
    #ifdef NDEBUG
    std::cout << "Say Release!" <<std::endl;
    #else
    std::cout << "Say Debug!" <<std::endl;
    #endif
}
