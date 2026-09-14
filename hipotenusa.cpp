#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int c1, c2;
cout << "primer cateto: ";
cin >> c1;
cout << "segundo cateto<<: ";
cin >> c2;
double h = sqrt((c1 * c1) + (c2 * c2));
cout << "La hipotenusa es: " << h << endl;
    return 0;
}