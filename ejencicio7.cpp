#include<iostream>
using namespace std;
int main()
{
int a = 7,b = 3;
int c = a * 2 + b % 2;
a = a +b * 3 + a / 2;
b = c % 3 + a / 2;
cout <<"a "<<a<<endl<<"b "<<b<<endl<<"c "<<c<<endl;
return 0;
}