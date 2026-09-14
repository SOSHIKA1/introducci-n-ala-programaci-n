#include<iostream>
using namespace std;
int main()
{
double r,h,pi = 3.1416;
cin>>r>>h;
double v = (pi * r *r * h)+(2/3 * r * r *r * pi) ;
double s = 2 * pi * r *(1 +r);
cout <<"el volumen es: "<< v <<endl<<"la superficie es: "<< s <<endl;

    return 0;
}