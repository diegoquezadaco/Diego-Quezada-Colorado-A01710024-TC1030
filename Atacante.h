#ifndef ATACANTE_H
#define ATACANTE_H
#include <iostream>
#include <string> 
#include "Jugador.h"
#include "Colaborador.h"
using namespace std;
//Atacante hereda de Jugador
class Atacante : public Jugador {

    private:
    int goles_anotados;
    int asistencias;
    
    public:
    void setEstadisticas(int nivel){
        goles_anotados = 0.2*nivel;
        asistencias = 0.1*nivel;
        estadisticas[0] = goles_anotados;
        estadisticas[1] = asistencias;
    }
    void mostrar_estadisticas(){
        cout << "Jugador: " << nombre << endl;
        cout << "Posicion: " << tipo << endl;
        cout << "Nivel: " << nivel << endl;
        cout << "Sueldo: " << sueldo <<" millones de MXN" << endl;
        cout << "Edad: " << edad << endl;
        cout << "Goles anotados: " << goles_anotados << endl;
        cout << "Asistencias: " << asistencias << endl;
        }
    //Creamos un contructor de Atacante apoyado en el constructor de Jugador
    Atacante(string _nombre, string _tipo, int _nivel, double _sueldo, int _edad) : Jugador(_nombre, _tipo, _nivel, _sueldo, _edad){
    setEstadisticas(_nivel); 
    }
    
};
#endif