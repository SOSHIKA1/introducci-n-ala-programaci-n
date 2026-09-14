#include<iostream>
using namespace std;
int main()
{
int h,b;
cout<<"base del triangulo: ";
cin >> b;
cout << "altura del triangulo: ";
cin >> h;
int a = ((b * h)/2)*5;
int p = b * 5;
cout <<"area del pentagono: "<< a << endl<<"perimetro del pentagono: "<< p << endl;
return 0;
}