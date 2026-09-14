#include<iostream>
using namespace std;

int main()
{
int c;
cout << "ingrese la temperatura en grados Celsius: ";
cin >> c;
int f = (c * 9/5) + 32;
int k = c + 273;
int r = c * 4/5;
cout << "la temperatura en grados Fahrenheit es: " << f << endl;
cout << "la temperatura en grados Kelvin es: " << k << endl;
cout << "la temperatura en grados Rankine es: " << r << endl;

    return 0;
}