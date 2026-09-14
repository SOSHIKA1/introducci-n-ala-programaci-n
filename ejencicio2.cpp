#include<iostream>
using namespace std;
int main()
{
int a = 4,b = 10,c;
cin >>a>>b;
c = (a++ + ++b) * 2;
cout <<"a= "<<a<<"b= "<<b<<"c= "<<c<< endl;
return 0;
}