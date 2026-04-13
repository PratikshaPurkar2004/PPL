#include "GCDLCM.h"

GCDLCM::GCDLCM(int x,int y)
{
    a=x;
    b=y;
}

int GCDLCM::gcd(int x,int y)
{
    if(y==0)
        return x;
    return gcd(y, x % y);
}

int GCDLCM::findGCD()
{
    return gcd(a,b);
}

int GCDLCM::lcm()
{
    return (a*b)/findGCD();
}
