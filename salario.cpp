#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
float T,H,S;
cin>> T >> H >> S;
float salario = (H * S);
cout << "NUMBER = "<< T <<endl << "SALARY = U$ "<< fixed << setprecision(2) << salario << endl;
return 0;
}