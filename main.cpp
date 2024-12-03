#include <iostream>
#include "calculate.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;

    float x = calculate::add(1,32);

    float y = calculate::sub(3,2);

    calculate::print(x, y);



    return 0;
}
