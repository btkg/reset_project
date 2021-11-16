#ifndef __MYSTRING__
#define __MYSTRING__

#include <iostream>
#include <cstring>
class MyString
{
private:
    char *str;

public:
    MyString()
    {
        this->str = new char[1];
        this->str[0] = '\0';
    }
    MyString(const char *s);
    MyString(const MyString &s);
    MyString &operator=(const MyString &s);
    ~MyString();
    char *getStr() const
    {
        return str;
    };
};

inline MyString::MyString(const char *s)
{
    if (s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    else
    {
        str = new char[1];
        str[0] = '\0';
    }
}

inline MyString::MyString(const MyString &s)
{
    str = new char[strlen(s.getStr()) + 1];
    strcpy(str, s.getStr());
}

inline MyString &MyString::operator=(const MyString &s)
{
    if (this != &s)
    {
        delete[] str;
        str = new char[strlen(s.getStr()) + 1];
        strcpy(str, s.getStr());
    }
    return *this;
}

inline MyString::~MyString()
{
    delete[] str;
}

inline std::ostream &operator<<(std::ostream &os, const MyString &s)
{
    return os << s.getStr();
}

#endif
