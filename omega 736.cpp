#include<iostream>
using namespace std;
int main()
{
string a;
cout<<"es vertebrado o invertebrado: ";
cin>>a;
if ( a == "vertebrado")
{
    string b;
    cout <<"es ave o mamifero: ";
    cin>>b;
    if (b == "ave")
{
    string c;
    cout <<"escarnivoro o onivoro: ";
    cin>>c;
    if (c == "escarnivoro")
    {
        cout <<"aguila";
    }
    else
    {
        cout <<"pomba";
    }
}
else
{
    string d;
    cout<<"es onivoro o hervivoro: ";
    cin>>d;
    if (d == "onivoro")
    {
        cout <<"homem";
    }
    else
    {
        cout<<"vaca";
    }
}
}
else
{
    string e;
    cout <<"es insecto o anelideo: ";
    cin>>e;
    if (e == "insecto")
    {
        string f;
        cout <<"es homatofago o hervivoro: ";
        cin>>f;
        if (f == "homatofago")
        {
            cout <<"pulga";
        }
        else
        {
            cout <<"lagarta";
        }
    }
    else 
    {
        string g;
        cout <<"hematofago o onivoro: ";
        cin >>g;
        if (g == "hematofago")
        {
            cout <<"sanguessuga";
        }
        else
        {
            cout <<"minhoca";
        }
    }
}
    return 0;
}