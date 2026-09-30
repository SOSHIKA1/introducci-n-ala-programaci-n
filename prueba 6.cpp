#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"ingrese un numero: ";
cin>>num;
if (num>0 && num<20)
{
    if (num/3==1||num/5==1||num/7==1||num/11==1||num/13==1||num/17==1||num/19==1)
    {
        cout<<"el numero es primo"<<endl;
    }
    else
    {
        cout<<"el numero no es primo"<<endl;
    }
}
else
{
    cout <<"el numero no es aceptado"<<endl;
}
    return 0;
}