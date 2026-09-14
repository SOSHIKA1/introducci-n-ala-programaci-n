#include<iostream>
using namespace std;
int main()
{
int A,B;
cout<<"primer numero";
cin >>A;
cout<<"segundo numero";
cin >>B;
if (A + B == 5)
{
B = 3 + B;
int R2 = 2 * A + B;
cout<<"resultado 1: "<<R2;
}
else
{
A = A - 1;
if ((7 * A + B) % 2 ==0)

{
cout<<"resultado 2: "<<(A - B);
}
else
{
cout<<"resultsdo 3: "<<(A * B);
}
}
return 0;
}