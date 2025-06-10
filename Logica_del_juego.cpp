#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FuncionesTrey.h"

using namespace std;

int otorgarPTIniciales (int carta)
{
    if (carta <= 55)
    {
        return 7;
    }
    else if (carta <= 60)
    {
        return 8;
    }
    return 9;
}

void generarMazoAleatorio(int vMazo[])
{
    for (int x = 0; x < 20; x++)
    {
        vMazo[x] = rand() % (65 - 50 + 1) + 50;
    }
}

//Funcion que solicita al usuario escoger un numero entre 1 y 20 para obtener una carta del mazo
void robarCarta(string nombre1, string nombre2, int &carta1, int &carta2)
{
    int vMazo[20];
    generarMazoAleatorio(vMazo);
    int opcion1, opcion2;
    system("cls");
    cout << "----------------- TREY ------------------" << endl;
    cout << "-----------------------------------------" << endl;
    cout << nombre1 << ", elige un numero del 1 al 20 para elegir una carta del mazo: " << endl;
    cin >> opcion1;
    cout << endl;
    while(opcion1 < 1 || opcion1 > 20)
    {
        cout << "El numero ingresado debe ser mayor o igual a 1 y menor o igual a 20. Intentelo nuevamente: ";
        cin >> opcion1;
        cout << endl;
    }
    carta1 = vMazo[opcion1 - 1];
    cout << nombre2 << ", elige un numero del 1 al 20 para elegir una carta del mazo: " << endl;
    cin >> opcion2;
    cout << endl;
    while(opcion2 < 1 || opcion2 > 20 || opcion1 == opcion2)
    {
        cout << "El numero ingresado debe ser mayor o igual a 1 y menor o igual a 20, y no puede ser " << opcion1 << " porque ya fue elegido. Intentelo nuevamente: ";
        cin >> opcion2;
        cout << endl;
    }
    carta2 = vMazo[opcion2 - 1];
}
