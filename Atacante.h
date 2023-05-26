#ifndef ATACANTE_H
#define ATACANTE_H
#include <iostream>
#include <string>
#include "Jugador.h"
using namespace std;
//Atacante hereda de Jugador
class Atacante : public Jugador {

    private:
    int goles_anotados;
    int asistencias;
    
    public:
    void setEstadisticas(int  goles_anotados, int  asistencias){
        estadisticas[0] = goles_anotados;
        estadisticas[1] = asistencias;
        cout << "Goles: " << estadisticas[0] << endl;
        cout << "Asistencias: " << estadisticas[1] << endl;
    }
    
};
#endif