#include<iostream>
using namespace std;
int main(){
int num1, num2, suma = 0, resta = 0, multiplicacion = 0, divicion = 0;
cout<<"ponga un numero: ";cin>>num1;
cout<<"ponga otro numero: ";cin>>num2;
suma = num1 + num2;
resta = num1 - num2;
multiplicacion = num1 * num2;
divicion = num1 / num2;
cout<<"la suma es:"<<suma<<endl;
cout<<"la resta es:"<<resta<<endl;
cout<<"la multiplicacion es:"<<multiplicacion<<endl;
cout<<"la divicion es: "<<divicion<<endl;
return 0;
}