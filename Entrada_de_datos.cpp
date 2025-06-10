#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FuncionesTrey.h"

using namespace std;

int elegirOpcion()
{
    int opcion;
    cout << "Elija una opcion: ";
    cin >> opcion;
    return opcion;
}

void cargarJugadores(string &nombre1, string &nombre2)
{
    char confirmar;
    do
    {
        cout << "TREY" << endl;
        cout << "---------------------" << endl;
        cout << "Antes de comenzar deben registrar sus nombres:" << endl;
        cout << "¿Nombre? ";
        cin >> nombre1;
        cout << "¿Nombre? ";
        cin >> nombre2;
        cout << endl << "¿Confirmar nombres? (S/N) ";
        cin >> confirmar;
        cout << endl;
        if (confirmar == 'N' || confirmar == 'n')
        {
            cout << "Por favor volver a ingresar los nombres:" << endl;
        }
    } while (confirmar == 'N' || confirmar == 'n' || confirmar !='S' || confirmar !='s');
}



