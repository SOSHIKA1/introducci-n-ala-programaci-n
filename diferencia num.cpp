#include<iostream>
using namespace std;
int main()
{
int n;
cout <<"ingrese un numero: ";
cin >>n;
if (n > 0)
{
    cout <<"es positivo"<<endl;
}
else if (n == 0)
    {
        cout<<"es nulo"<<endl;
    }
    else 
{
    cout <<"es negativo"<< endl;
}
    return 0;
}