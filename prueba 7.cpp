#include <iostream>
using namespace std;
int main()
{
int num;
cout <<"ingrese un numero: ";
cin>>num;
if ((num<=-10 && num >=-20) && (num/-3 ==1||num/-5 ==1 ||num/-7 ==11||num/-13 ==1 || num/-17 ==1 || num/-19 ==1 || num/-11 ==1))
{
    cout<<"es negativo y primo"<<endl;
}
else
{
    cout<<"no es negativo y primo"<<endl;
}
    return 0;
}