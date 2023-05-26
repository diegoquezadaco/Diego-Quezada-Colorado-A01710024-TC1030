#ifndef DEFENSIVO_H
#define DEFENSIVO_H
#include <iostream>
#include <string>
#include "Jugador.h"
using namespace std;
//Defensivo hereda de Jugador
class Defensivo : public Jugador {

    private:
    int goles_encajados;
    int despejados;
    
    public:
    void setEstadisticas(int  goles_encajados, int  despejados){
        estadisticas[0] = goles_encajados;
        estadisticas[1] = despejados;
        cout << "Balones recuperados: " << estadisticas[0] << endl;
        cout << "Balones robados: " << estadisticas[1] << endl;
    }
    

    
};
#endif