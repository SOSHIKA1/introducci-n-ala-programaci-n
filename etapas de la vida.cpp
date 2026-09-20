#include<iostream>
using namespace std;
int main()
{
int n;
cout <<"cuantos años tienes? ";cin>>n;
if (n>= 0 && n <= 3)
{cout<< " eres bebé: ";}
else if (n >= 4 && n <= 14) 
{cout <<"eres niño: ";}
else if (n >= 15 && n <= 18 )
{cout<< "eres joven: ";}
else if ( n >= 19 && n <= 65)
{cout<<"eres adulto: ";}
else if (n >= 66)
{cout<<"eres adulto de la tercera edad";}
return 0;

}