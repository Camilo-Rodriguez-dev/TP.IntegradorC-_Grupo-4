#ifndef FUNCIONESTREY_H_INCLUDED
#define FUNCIONESTREY_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;
//Entrada de datos.
int elegirOpcion();
void cargarJugadores (string &nombre1, string &nombre2);
//Interfaz del menu.
void mostrarMenu();
void estadoPartida(string nombre1, int puntosAcumuladosJ1, int carta1, int PTJugador1, int contadorBugsJ1, string nombre2, int puntosAcumuladosJ2, int carta2, int PTJugador2, int contadorBugsJ2);
void estadoTurno(string nombre, int ronda, int puntosRonda, int lanzamientos);
// Hacer al final.
//mostrarEstadisticas(nombreUltimoGanador, ultimoPuntaje, rankingMejores5Jugadores, rankingMejores5Puntajes);
//mostrarCreditos();

//Logica del juego.
    //Datos de para inicio del juego.
    void robarCarta(string nombre1, string nombre2, int &carta1, int &carta2);
    void generarMazoAleatorio(int vMazo[]);
    int otorgarPTIniciales (int carta);
    //Funciones para dados.
    void lanzamientoDados(int &PTJugador, int &dado1, int &dado2, int &dado3, int contadorBugs);
    void mostrarResultadoLanzamiento(int dado1, int dado2, int dado3);
    void convertirDado(int dado);
//Ejecucion del juego.
juego(nombre1, nombre2, carta1, carta2, PTJugador1, PTJugador2, contadorBugsJ1, contadorBugsJ2, puntosAcumuladosJ1, puntosAcumuladosJ2, ceroBugsJ1, ceroBugsJ2, acum20J1, acum20J2, rankingMejores5Jugadores, rankingMejores5Puntajes, nombreUltimoGanador, ultimoPuntaje);

#endif // FUNCIONESTREY_H_INCLUDED
