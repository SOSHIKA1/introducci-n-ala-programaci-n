#include<iostream>
using namespace std;

int main()
{
int base, altura;
cout << "ingrese la base del rectangulo: ";
cin >> base;
cout << "ingrese la altura del rectangulo: ";
cin >> altura;
int area = base * altura;
int perimetro = 2 * (base + altura);
cout << "el area del rectangulo es: " << area << endl;
cout << "el perimetro del rectangulo es: " << perimetro << endl;
return 0;
}