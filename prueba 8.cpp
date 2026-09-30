#include <iostream>
using namespace std;
int main()
{
int num;
cout <<"ingrese un numero: ";
cin>>num;
if (num>0 && num<100)
{
  int dig1 = num/10;
   int dig2 = num%10; 
   if ((dig1==2||dig1==3||dig1==5||dig1==7)&&(dig2==2||dig2==3||dig2==5||dig2==7))
   {
    cout <<"los dos digitos son primos"<<endl;
   }
   else
   {
    cout <<"los dos digitos no son primos"<<endl;
   }
}
else
{
    cout <<"el numero no es aceptado"<<endl;
}
    return 0;
}