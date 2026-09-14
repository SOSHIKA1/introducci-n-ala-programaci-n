#include<iostream>
using namespace std;
int main()
{   
int x;
cout << "ingrese un numero: ";
cin >> x;
int b = (x + (x * x)/((5 * x) + 3));
int y = (b + x) * (b / (b +(2 * x)));
cout << "resultado es: "<< y << endl;

    return 0;
}