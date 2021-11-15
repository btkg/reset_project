#ifndef __COMPLEX__
#define __COMPLEX__

#include <cmath>
#include <iostream>
class complex
{
private:
    double re, im;

public:
    complex(double r, double i)
    {
        this->re = r;
        this->im = i;
    }
    complex &operator+=(const complex &r)
    {
        this->re += r.re;
        this->im += r.im;
        return *this;
    }

    double real() const { return this->re; }
    double imag() const { return this->im; }
};

complex operator+(complex a, complex b) //传值，不会改变a的值
{
    return a += b;
}

std::ostream &operator<<(std::ostream &os, const complex &c)
{
    return os << c.real() << "+" << c.imag() << "i";
}

#endif
