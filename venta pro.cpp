#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int codigo1,cantidad1,codigo2,cantidad2;//nombre del producto
double precio1,precio2;
cin>> codigo1>>cantidad1>>precio1>>codigo2>>cantidad2>>precio2;
double total = (cantidad1*precio1)+(cantidad2*precio2);
cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ "<< total << endl;
}