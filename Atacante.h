/**
 * Proyecto Integrador - TC1030
 * Proyecto presidente Cruz Azul FC
 * Diego Quezada Colorado A01710024
 * 08/06/2023   
 */
/**
 * Clase Atacante
 * Esta clase hereda de Jugador, y es la clase hija de Jugador.
 * Podría decirse que es una clase nieta de Colaborador
 * Esta clase se encarga de administrar los datos de los atacantes
 * 
*/
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
    //Declaramos las variables de instancia de un jugador atacante
    int goles_anotados;
    int asistencias;
    
    public:
    //Declaramos los metodos de clase
    void estadisticas(int nivel);
    void mostrar_estadisticas();
    
    Atacante(string _nombre, string _tipo, int _nivel, double _sueldo,
            int _edad);

};
//Declaramos la definicion de los metodos virtuales
/**
 * Metodo estadisticas(int nivel)
 * Este metodo calcula las estadisticas de un jugador atacante en base a
 * su nivel, y con ello se define el valor que tomará el atributo de 
 * goles_anotados y asistencias
 * 
 * @param int: nivel
 * @return 
 * 
*/
void Atacante::estadisticas(int nivel){
    goles_anotados = 0.2*nivel;
    asistencias = 0.1*nivel;
}
/**
 * Metodo mostrar_estadisticas()
 * Este metodo sobreescribe el metodo abstracto de Colaborador y el
 * metodo virtual de Jugador, y muestra los datos, de acuerdo a las 
 * estadísticas que tiene un jugador atacante que son goles anotados y 
 * asistencias, es uno de los usos que le doy al polimorfismo
 * 
 * @param
 * @return
*/
void Atacante::mostrar_estadisticas(){
    cout << "Jugador: " << nombre << endl;
    cout << "Posicion: " << tipo << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "Sueldo: " << sueldo <<" millones de MXN" << endl;
    cout << "Edad: " << edad << endl;
    cout << "Goles anotados: " << goles_anotados << endl;
    cout << "Asistencias: " << asistencias << endl;
    }
/**
 * Constructor de Atacante con paso de parámetros
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
Atacante::Atacante(string _nombre, string _tipo, int _nivel, double _sueldo,
            int _edad) : Jugador(_nombre, _tipo, _nivel, _sueldo, _edad){
estadisticas(_nivel); 
}
    
#endif