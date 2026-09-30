#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"ingrese un numero: ";
cin>>num;
if ((num>=10 && num<=99)||(num>= -99 && num< -10))
{
    if ((num%2==0)&&(num/10%2==0))
{
    cout<<"los dos digitos son pares"<<endl;
}
else 
{
cout<<"los dos digitos no son pares"<<endl;
}
}
else
{
    cout <<"el numero no es aceptado"<<endl;
}
    return 0;
}