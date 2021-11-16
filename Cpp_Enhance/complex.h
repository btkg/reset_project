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

inline complex operator+(const complex &a, const complex &b)
{
    return complex(a.real() + b.real(), a.imag() + b.imag());
}

inline complex operator+(const complex &a, double b)
{
    return complex(a.real() + b, a.imag());
}

inline complex operator+(double a, const complex &b)
{
    return complex(a + b.real(), b.imag());
}

std::ostream &operator<<(std::ostream &os, const complex &c)
{
    return os << c.real() << "+" << c.imag() << "i";
}

#endif
