#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
string N;
 cin >> N;
double S,M;
cin >> S >> M;
double total = ((M * 15)/100) + S;
cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
return 0;
}