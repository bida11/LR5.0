#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    double p, q, c;

    cout << "p = ";
    cin >> p;

    cout << "q = ";
    cin >> q;

    c = calculate(p, q);

    cout << "c = " << c << endl;

    return 0;
}