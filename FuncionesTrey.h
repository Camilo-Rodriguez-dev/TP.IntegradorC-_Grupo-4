#ifndef FUNCIONESTREY_H_INCLUDED
#define FUNCIONESTREY_H_INCLUDED

//Entrada de datos.
int elegirOpcion();
void cargarJugadores (string &nombre1, string &nombre2);
//Interfaz del menu.
void mostrarMenu();
// Hacer al final.
mostrarEstadisticas(nombreUltimoGanador, ultimoPuntaje, rankingMejores5Jugadores, rankingMejores5Puntajes);
mostrarCreditos();
//Logica del juego.
void robarCarta(string nombre1, string nombre2, int &carta1, int &carta2);
void generarMazoAleatorio(int vMazo[]);
int otorgarPTIniciales (int carta);
//Ejecucion del juego.
juego(nombre1, nombre2, carta1, carta2, PTJugador1, PTJugador2, contadorBugsJ1, contadorBugsJ2, puntosAcumuladosJ1, puntosAcumuladosJ2, ceroBugsJ1, ceroBugsJ2, acum20J1, acum20J2, rankingMejores5Jugadores, rankingMejores5Puntajes, nombreUltimoGanador, ultimoPuntaje);

#endif // FUNCIONESTREY_H_INCLUDED
