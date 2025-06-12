#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "FuncionesTrey.h"

using namespace std;

void mostrarMenu()
{
    cout << "TREY" << endl;
    cout << "---------------------" << endl << endl;
    cout << "1 - JUGAR" << endl;
    cout << "2 - ESTADÍSTICAS" << endl;
    cout << "3 - CREDITOS" << endl  << endl;
    cout << "---------------------" << endl;
    cout << "0 - SALIR" << endl;
}
mostrarEstadisticas(nombreUltimoGanador, ultimoPuntaje, rankingMejores5Jugadores, rankingMejores5Puntajes);
{

}
mostrarCreditos();
{

}
//Muestra los puntos actuales.
void estadoPartida(string &nombre1, int &puntosAcumuladosJ1, int &carta1, int &PTJugador1, int &contadorBugsJ1,
                    string &nombre2, int &puntosAcumuladosJ2, int &carta2, int &PTJugador2, int &contadorBugsJ2)
{
    cout << "--------------------------------------------------------" << endl;
    cout << nombre1 << ": " << puntosAcumuladosJ1 << " de " << carta1 << " puntos\t";
    cout << nombre2 << ": " << puntosAcumuladosJ2 << " de " << carta2 << " puntos" << endl;
    cout << "PT: " << PTJugador1 << " / BUGS: " << contadorBugsJ1 << "\t\t";
    cout << "PT: " << PTJugador1 << " / BUGS: " << contadorBugsJ2 << endl;
}
//Muestra turno.
void estadoTurno(string nombre, int &ronda, int &puntosRonda, int &lanzamientos)
{
    cout << endl << "TURNO DE " << nombre << endl;
    cout << "+---------------------------------+" << endl;
    cout << "    RONDA: " << ronda << endl;
    cout << "    PUNTOS DE LA RONDA: " << puntosRonda << endl;
    cout << "    LANZAMIENTOS: " << lanzamientos << endl;
    cout << "+---------------------------------+" << endl;
}


