#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main() {
    
    srand(time(0));
    int computadora;
    computadora = rand() % 3 + 1;

        cout << "La computadora eligió: "<<computadora<<endl;
cout <<"1 = piedra, 2 = papel, 3 = tijeras"<<endl;
int jugador;
cout <<"eligue el jugador: ";cin>>jugador;
if (computadora == jugador)
{
    cout <<"empate";
}
else if ((computadora == 1&&jugador == 2)||(computadora == 2 && jugador == 3)||(computadora == 3 && jugador == 1))
{
    cout <<"gana el jugador";
}
else
{
    cout << "gana la computadora";
}
    return 0;
}