#include<iostream>
using namespace std;
int main()
{
int x = 10,y = -4;
cin >>x>>y;
x = x + y;
y = x - y;
x = x - y;
cout <<"x ="<<x<<",y ="<<y<<endl;

return 0;
}