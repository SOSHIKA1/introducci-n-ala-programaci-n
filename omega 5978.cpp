#include<iostream>
using namespace std;
int main()
{
    string M1,M2;
int p1,p2;
cout<<"primer nombre: ";
cin>>M1;
cout<<"primer puntuacion: ";
cin>>p1;
cout<<"segundo nombre: ";
cin>>M2;
cout<<"segundo puntuacion: ";
cin>>p2;
if (p1>p2)
{
    cout<<"ganador: "<<M1;
}
else
{
    cout<<"ganador: "<<M2;
}
    return 0;
}