#include<iostream>
using namespace std;
int main()
{
int x,y;
cout <<"x? ";cin>>x;
cout <<"y? ";cin>>y;
if (x > 0 && y > 0)
{cout<< " primer cuadrante";}
else if (x < 0 && y > 0) 
{cout <<"segundo cuadrante";}
else if (x > 0 && y > 0 )
{cout<< "tercer vuadrante";}
else if ( x > 0 && y < 0)
{cout<<"cuarto cuadrante";}
return 0;

}