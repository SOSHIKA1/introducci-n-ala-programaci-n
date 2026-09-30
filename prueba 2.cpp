#include <iostream>
using namespace std;
int main()
{
int numero;
cout <<"ingrese un numero: ";
cin>>numero;
if ((numero>=100 && numero<=999)||(numero>= -999 && numero<= -100))
{
    cout <<"si es un numero de 3 digitos"<<endl;
}
else
{
cout<<"no es un numero de 3 digitos"<<endl;
}
    return 0;
}