#include<iostream>
using namespace std;
int main()
{
int c,a,b;
cin>>c>>a>>b;
int v = (a*a*b)+(a*a/3*c);
int s = (2*a*b)+(b*a*2);
cout <<"el volumen es: "<< v <<endl<<"la superficie es: "<< s <<endl;
    return 0;
}