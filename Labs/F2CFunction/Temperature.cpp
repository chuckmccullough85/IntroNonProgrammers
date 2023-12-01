#include "Temperature.h"

float f2c(float fahrenheit)
{
    float c;
    c = (fahrenheit - 32) * 5.0 / 9.0;
    return c;
}

float f2k(float fahrenheit)
{
    return c2k(f2c(fahrenheit));
}

float c2f(float celsius)
{
    float f;
    f = celsius * 9.0 / 5.0 + 32;
    return f;
}

float c2k(float celsius)
{
    float k;
    k = celsius + 273.15;
    return k;
}

float k2f(float kelvin)
{
    return c2f(k2c(kelvin));
}

float k2c(float kelvin)
{
    float c;
    c = kelvin - 273.15;
    return c;
}

