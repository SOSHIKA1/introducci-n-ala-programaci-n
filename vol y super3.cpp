#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double c,a,b,h = sqrt(2);
cin>>c>>a>>b;
double v = (a*a*b)-(a*a/3*c);
double s = (2*a)+(b+h);
cout <<"el volumen es: "<< v <<endl<<"la superficie es: "<< s <<endl;
    return 0;
}