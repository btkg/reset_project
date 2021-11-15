#include "complex.h"
int main()
{
    complex c1(1, 2);
    complex c2(3, 4);
    complex c3 = c1 + c2;
    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
    std::cout << c3 << std::endl;
    return 0;
}
