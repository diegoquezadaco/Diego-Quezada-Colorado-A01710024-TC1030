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
    //Declaramos los atributos de un jugador defensivo
    public:
    //Denotamos que las estadísticas de un jugador defensivo dependen de su nivel
    void setEstadisticas(int _nivel){
        if (_nivel <= 55)
            goles_encajados = (int)0.5*_nivel;
        else if (_nivel > 55 && _nivel <= 70)
            goles_encajados = (int)0.4*_nivel;
        else if (_nivel > 70 && _nivel <= 85)
            goles_encajados = (int)0.3*_nivel;
        else if (_nivel > 85 && _nivel <= 100)
            goles_encajados = (int)0.2*_nivel;
        despejados = (int)0.2*_nivel;
        estadisticas[0] = goles_encajados;
        estadisticas[1] = despejados;
    } 
    void mostrarEstadisticas(){
        cout << "Jugador: " << nombre << endl;
        cout << "Posicion: " << tipo << endl;
        cout << "Nivel: " << nivel << endl;
        cout << "Sueldo: " << sueldo <<" millones de MXN" << endl;
        cout << "Edad: " << edad << endl;
        cout << "Goles encajados: " << estadisticas[0] << endl;
        cout << "Despejes: " << estadisticas[1] << endl;
        }
    //Creamos un contructor de Defensivo apoyado en el constructor de Jugador
    Defensivo(string _nombre, string _tipo, int _nivel, double _sueldo, int _edad) : Jugador(_nombre, _tipo, _nivel, _sueldo, _edad){
        setEstadisticas(_nivel);
    }

    
};
#endif