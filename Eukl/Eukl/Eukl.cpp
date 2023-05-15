// Eukl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int nwd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return nwd(b, a % b); // operator % w C++ realizuje funkcjê modulo
                              // (reszta z dzielenia liczb calkowiytch)
}

int main()
{
    cout << "nwd(12,3)=" << nwd(12, 3) << endl; //wypisz wynik
    return 0;
}
