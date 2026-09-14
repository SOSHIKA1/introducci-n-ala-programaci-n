#include<iostream>
using namespace std;
int main()
{
int b1,b2,h;
cout << "base mayor: ";
cin >> b1;
cout <<"base menor: ";
cin >> b2;
cout << "altura: ";
cin >> h;
int area = ((b1 + b2) * h)/2;
cout << "el area del trapecio es: "<< area << endl;

return 0;
}