#include<iostream>
using namespace std;
int main()
{
double a,h,b,pi = 3.1416;
cin>>a>>h>>b;
double v = (h*pi/3)*((a*a)+(b*b)+(a*b));
cout <<"el volumen es: "<< v <<endl;
    return 0;
}