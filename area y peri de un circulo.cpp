#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double a,b,pi = 3.1416;
cout <<"radio mayor: ";
cin >> b;
cout <<"radio menor: ";
cin >> a;
double area = pi * a * b;
double perimetro = 2 * pi * ((sqrt(a * a + b * b))/2);
cout <<"el area es: "<< area <<endl<<"el perimetro es: "<< perimetro<<endl;
    return 0;
}