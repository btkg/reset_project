#include "mystring.h"
int main()
{
    MyString s1();
    MyString s2("hello");
    MyString s3;
    std::cout << s3 << std::endl;
    s3 = s2;
    std::cout << s3 << std::endl;
    return 0;
}
