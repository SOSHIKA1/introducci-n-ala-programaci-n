#include<iostream>
using namespace std;
int main()
{
int b,h;
cout <<"base del triangulo: ";
cin >> b;
cout << "altura del triangulo: ";
cin >> h;
int a = (b * h )* 3;
int p = b * 6;
cout << "el area del hexagono es: "<< a <<endl<<"el perimetro es: "<<p<< endl;
    return 0;
}