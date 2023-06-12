#ifndef DEFENSIVO_H
#define DEFENSIVO_H
#include <iostream>
#include <string>
#include "Jugador.h"
#include "Colaborador.h"
using namespace std;
//Defensivo hereda de Jugador
class Defensivo : public Jugador{

    private:
    int goles_encajados;
    int despejados;
    //Declaramos los atributos de un jugador defensivo
    public:
    //Denotamos que las estadísticas de un jugador defensivo dependen de su nivel
    void setEstadisticas(int nivel){
        if (nivel <= 55){
            goles_encajados = 0.5*nivel;
        }
        else if (nivel > 55 && nivel <= 70){
            goles_encajados = 0.4*nivel;
        }
            
        else if (nivel > 70 && nivel <= 85){
            goles_encajados = 0.3*nivel;
        }
        else if (nivel > 85 && nivel <= 100){
            goles_encajados = 0.2*nivel;
        }
        despejados = 0.2*nivel;
        estadisticas[0] = goles_encajados;
        estadisticas[1] = despejados;
    } 
    void mostrar_estadisticas(){
        cout << "Jugador: " << nombre << endl;
        cout << "Posicion: " << tipo << endl;
        cout << "Nivel: " << nivel << endl;
        cout << "Sueldo: " << sueldo <<" millones de MXN" << endl;
        cout << "Edad: " << edad << endl;
        cout << "Goles encajados: " << goles_encajados << endl;
        cout << "Despejes: " << despejados << endl;
        }
    //Creamos un contructor de Defensivo apoyado en el constructor de Jugador
    Defensivo(string _nombre, string _tipo, int _nivel, double _sueldo, int _edad) : Jugador(_nombre, _tipo, _nivel, _sueldo, _edad) {
        setEstadisticas(_nivel);
}


    
};
#endif