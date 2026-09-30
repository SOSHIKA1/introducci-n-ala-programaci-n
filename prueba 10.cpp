#include <iostream>
using namespace std;
int main()
{
int num;
cout <<"ingrese un numero: ";
cin>>num;
if (num>=10 && num<=99)
{
    int dig1 = num/10;
    int dig2 = num%10;
    if (dig1==dig2)
    {
        cout <<"los dos digitos son iguales"<<endl;
    }
    else 
    {
        cout <<"los dos digitos no son iguales"<<endl;
    }
}
else
{
    cout <<"el numero no es aceptado"<<endl;
}
    return 0;
}