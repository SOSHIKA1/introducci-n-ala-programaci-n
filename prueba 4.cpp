#include<iostream>
using namespace std;
int main()
{
int numero;
cout <<"ingrese un numero: "<<endl;
cin>>numero;
if ((numero>=10 && numero<=99)||(numero *-1))
{
    int primer = numero / 10;
    int resto = numero % 10;
    cout <<"la suma de los digitos es "<<primer + resto<<endl;
}
else
{
    cout <<"el numero no es aceptado"<<endl;
}
    return 0;
}