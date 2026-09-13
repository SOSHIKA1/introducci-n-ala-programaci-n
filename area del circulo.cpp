#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
double R, pi = 3.14159;
cin >>R;
double A =  pi * R * R;
cout << fixed << setprecision(4);
cout << "A=" << A << endl;
}