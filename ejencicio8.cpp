#include<iostream>
using namespace std;
int main()
{
int x = 8, y = 2;
x += y * 3;
y = x - y;
cout<<"x "<<x<<endl<<"y "<<y<<endl;
return 0;
}