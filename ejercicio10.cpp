#include<iostream>
using namespace std;
int main()
{
int a = 7,b = 3;
int c = ++a + b--;
cout<<"a "<<a<<endl<<"b "<<b<<endl<<"c "<<c<< endl;
return 0;
}