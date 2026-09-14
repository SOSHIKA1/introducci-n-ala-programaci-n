#include<iostream>
using namespace std;
int main()
{
int x = 5;
int y = ++x * x--;
cout<<"x "<<x<<endl<<"y "<<y<<endl;
return 0;
}