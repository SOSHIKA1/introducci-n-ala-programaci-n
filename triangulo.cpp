#include<iostream>
using namespace std;
int main ()
{
int x,y,z;
cin>>x>>y>>z;
if (x == y && y == z)
{
    cout <<"equilatero: ";
}
else if ( x == y && y != z)
{cout <<"isoceles: ";}
else if (x != y && y != z)
{cout <<"scaleno: ";}
    return 0;
}