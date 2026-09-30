#include<iostream>
using namespace std;
int main()
{
int num;
cout <<"ingrese un numero: ";
cin>>num;
if (num>9 && num<100)
{
    int dig1 = num/10;
    int dig2 = num%10;
    if ((dig2!=0 && (dig1%dig2 ==0))|| dig1 !=0 && (dig2% dig1 == 0))
    {
        cout <<"los dos digitos son multiplos"<<endl;
    }
    else
    {
        cout <<"los dos digitos no son multiplos"<<endl;
    }
}
else
{
    cout <<"el numero no es aceptado"<<endl;
}
    return 0;
}