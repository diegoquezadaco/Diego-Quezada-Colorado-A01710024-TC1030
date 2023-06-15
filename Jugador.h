/**
 * Proyecto Integrador - TC1030
 * Proyecto presidente Cruz Azul FC
 * Diego Quezada Colorado A01710024
 * 08/06/2023   
 */
/**
 * Clase Jugador
 * Esta clase hereda de Colaborador, y es la clase padre de Atacante y 
 * Defensivo.
 * Esta clase se encarga de administrar los datos de los jugadores
 * 
*/

#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>
#include "Colaborador.h"
using namespace std;

//Jugador hereda de Colaborador
class Jugador : public Colaborador {

    protected:
    //Declaro la variable de instancia
    int edad;

    public:

    //Declaro lo metodos de clase

    int getEdad();
    void setEdad();
    virtual void estadisticas(int _nivel){};
    virtual void mostrar_estadisticas(){};
    void setNivel();

    Jugador(string _nombre, string _tipo, int _nivel, double _sueldo,
             int _edad);
    Jugador();
};
//Getter del atributo
/**
 * Metodo getEdad()
 * Este metodo regresa la edad del jugador
 * 
 * @param
 * @return int: edad
*/
int Jugador::getEdad(){
    return edad;
}
//Setter del atributo
/**
 * Metodo setEdad()
 * Este metodo aumenta la edad del jugador en 1, para usarse por cada año
 * que pasa, para hacer más realista el juego
 * 
 * @param
 * @return
*/
void Jugador::setEdad(){
    edad = 1+edad;
}


/**
 * Metodo setNivel()
 * Este metodo sobreescribe el metodo de la clase padre, y aumenta o disminuye
 * el nivel del jugador dependiendo de su edad y posicion
 * 
 * @param
 * @return
*/
void Jugador::setNivel(){
    if (tipo == "Delantero" || tipo == "Medio"){
        if (edad >= 16 && edad <= 25){
            nivel = nivel + 2;
        }
        else if (edad > 25 && edad <= 30){
            nivel = nivel + 1;
        }
        else if (edad > 30 && edad <= 34){
            nivel = nivel - 2;
        }
        else if (edad > 34 && edad <= 37){
            nivel = nivel - 3;
        }
    }
    else if (tipo == "Defensa" || tipo == "Portero"){
        if (edad >= 16 && edad <= 27){
            nivel = nivel + 1;
        }
        else if (edad > 27 && edad <= 33){
            nivel = nivel + 2;
        }
        else if (edad > 33 && edad <= 37){
            nivel = nivel - 1;
        }
    }
}
/**
 * Constructor de Jugador con paso de parametros
 * Este constructor recibe los parametros de nombre, tipo, nivel, sueldo y 
 * edad y los asigna a las variables de instancia, se apoya del constructor
 * de la clase padre Colaborador
 * 
 * @param string _nombre
 * @param string _tipo
 * @param int _nivel
 * @param double _sueldo
 * @param int _edad
 * @return
*/
Jugador::Jugador(string _nombre, string _tipo, int _nivel, double _sueldo,
        int _edad): Colaborador(_nombre, _tipo, _nivel, _sueldo){
    edad = _edad;
}
/**
 * Constructor de Jugador por default
 * Este constructor no recibe parametros, y asigna valores por default a las
 * variables de instancia, se apoya del constructor de la clase padre
 * 
 * @param
 * @return
*/
Jugador::Jugador(): Colaborador(){
    edad = 0;           
    estadisticas(nivel);
}

#endif