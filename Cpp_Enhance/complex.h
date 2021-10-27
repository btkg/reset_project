#ifndef __COMPLEX__
#define __COMPLEX__

#include <cmath>

template <typename T>
class complex
{
private:
    T re, im;

public:
    complex(double r = 0, double i = 0)
        : re(r), im(r)
    {
    }
    complex &operator+=(const complex &);
    double real() const { return re; }
    double imag() const { return im; }
};

#endif