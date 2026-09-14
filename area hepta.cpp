#include<iostream>
using namespace std;
int main()
{
int b,h;
cout <<"base del triangulo: ";
cin >> b;
cout << "altura del triangulo: ";
cin >> h;
int a = ((b * h)/2 )*7;
int p = b * 7;
cout << "el area del heptagono es: "<< a <<endl<<"el perimetro es: "<<p<< endl;
    return 0;
}