#include<iostream>
using namespace std;
int main()
{
int y = 4, x = 4;
cin>>y>>x;
y = ++x;
x = x++ + ++y;
cout <<"x= "<<x<<"y="<<y<<endl;
return 0;
}