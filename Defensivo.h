/**
 * Proyecto Integrador - TC1030
 * Proyecto presidente Cruz Azul FC
 * Diego Quezada Colorado A01710024
 * 08/06/2023   
 */
/**
 * Clase Defensivo
 * Esta clase hereda de Jugador, y es la clase hija de Jugador.
 * Podría decirse que es una clase nieta de Colaborador
 * Esta clase se encarga de administrar los datos de los defensivos
 * 
 */

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
    //Declaramos las variables de instancia de un jugador defensivo
    int goles_encajados;
    int despejados;

    public:
    
    //Declaramos los metodos de clase
    void estadisticas(int nivel);
    void mostrar_estadisticas();

    Defensivo(string _nombre, string _tipo, int _nivel, double _sueldo,
              int _edad);
};
//Declaramos la definicion de los metodos virtuales
/**
 * Metodo estadisticas(int nivel)
 * Este metodo calcula las estadisticas de un jugador defensivo en base a
 * su nivel, y con ello se define el valor que tomará el atributo de 
 * goles_encajados y despejes
 * 
 * @param int: nivel
 * @return 
 * 
*/
void Defensivo::estadisticas(int nivel){
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
} 
/**
 * Metodo mostrar_estadisticas()
 * Este metodo sobreescribe el metodo abstracto de Colaborador y el
 * metodo virtual de Jugador, y muestra los datos, de acuerdo a las 
 * estadísticas que tiene un jugador defensivo que son goles encajados y 
 * balones despejados, es una de los usos que le doy al polimorfismo
 * 
 * @param
 * @return
*/
void Defensivo::mostrar_estadisticas(){
    cout << "Jugador: " << nombre << endl;
    cout << "Posicion: " << tipo << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "Sueldo: " << sueldo <<" millones de MXN" << endl;
    cout << "Edad: " << edad << endl;
    cout << "Goles encajados: " << goles_encajados << endl;
    cout << "Despejes: " << despejados << endl;
    }
/**
 * Constructor de Defensivo con paso de parámetros
 * Este constructor recibe los parametros de nombre, tipo, nivel, sueldo y 
 * edad y los asigna a las variables de instancia, se apoya del constructor
 * de la clase padre Jugador que a su vez se apoya de la que sería la clase
 * abuela de Defensivo, que es Colaborador
 * 
 * @param string _nombre
 * @param string _tipo
 * @param int _nivel
 * @param double _sueldo
 * @param int _edad
 * @return
*/
Defensivo::Defensivo(string _nombre, string _tipo, int _nivel, double _sueldo,
            int _edad) : Jugador(_nombre, _tipo, _nivel, _sueldo, _edad) {
    estadisticas(_nivel);
}

#endif