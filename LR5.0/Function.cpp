#include <cmath>
#include "Function.h"

using namespace std;

double kFunction(double x, double y)
{
    double sinY = sin(y);

    return x / (1.0 + sinY * sinY)
        + y / (1.0 + x * x);
}

double calculate(double p, double q)
{
    double numerator = kFunction(1 + p * q, q * q)
        + pow(kFunction(p, p * p), 2);

    double denominator = 1 + kFunction(p * q + q * q, p);

    return numerator / denominator;
}