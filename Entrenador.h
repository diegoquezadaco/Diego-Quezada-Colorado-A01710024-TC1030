/**
 * Proyecto Integrador - TC1030
 * Proyecto presidente Cruz Azul FC
 * Diego Quezada Colorado A01710024
 * 08/06/2023   
 */
/**
 * Clase Entrenador
 * Esta clase hereda de Colaborador
 * Esta clase se encarga de administrar los datos de los entrenadores
 * 
*/
#ifndef ENTRENADOR_H
#define ENTRENADOR_H
#include <iostream>
#include <string>
using namespace std;
#include "Colaborador.h"

//Entrenador hereda de Colaborador
class Entrenador : public Colaborador {

    private:
    //Declaro las variables de instancia de un entrenador
    int victorias;
    int derrotas;
    
    public:
    //Declaramos los métodos de clase
    void estadisticas(int nivel);
    void setNivel();
    void mostrar_estadisticas();

    Entrenador(string _nombre,string _tipo, int _nivel, double _sueldo);

};

//Declaramos la definición de los métodos virtuales
/**
 * Metodo estadisticas(int nivel)
 * Este metodo calcula las estadisticas de un entrenador en base a
 * su nivel, y con ello se define el valor que tomará el atributo de 
 * victorias y derrotas, primero se definen las victorias respecto al nivel
 * y después se le restan a los partidos que se juegan durante el torneo, para
 * obtener el numero de derrotas correspondientes
 * 
 * @param int: nivel
 * @return 
 * 
*/

void Entrenador::estadisticas(int nivel){
    if (nivel < 55){
        victorias = 3;
        derrotas = 14;
    }
    else if (nivel >= 90){
        victorias = 14;
        derrotas = 3;
    }
    else{
        victorias = (nivel / 10);
        derrotas = 17 - victorias;
    }
}
/**
 * Metodo setNivel()
 * Este metodo sobreescribe el metodo de la clase padre, y aumenta 
 * el nivel del entrenador cada temporada, de manera aleatoria, con ayuda de
 * de la función rand()
 * 
 * @param
 * @return
*/
void Entrenador::setNivel(){
    nivel = nivel + (rand() % 2);
}
/**
 * Metodo mostrar_estadisticas()
 * Este metodo sobreescribe el metodo abstracto de Colaborador y muestra los
 * datos, de acuerdo a las estadísticas que componen a un entrenador, que son
 * victorias y derrotas, establecidos con ayuda de la función estadisticas, 
 * esta es una de los usos que le doy al polimorfismo
 * 
 * @param
 * @return
*/
void Entrenador::mostrar_estadisticas(){
    cout << "Entrenador: " << nombre << endl;
    cout << "Tipo de entrenador: " << tipo << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "Sueldo: " << sueldo << " millones de MXN" << endl;
    cout << "Victorias: " << victorias << endl;
    cout << "Derrotas: " << derrotas << endl;
}
/**
 * Constructor de Entrenador con paso de parametros
 * Este constructor recibe los parametros de nombre, tipo, nivel, sueldo 
 * y los asigna a las variables de instancia, se apoya del constructor
 * de la clase padre Colaborador y establece las estadisticas o isntancias de
 * esta clase con ayuda de la funcion estadísticas, previamente definidas
 * 
 * @param string _nombre
 * @param string _tipo
 * @param int _nivel
 * @param double _sueldo
 * @return
*/
Entrenador::Entrenador(string _nombre,string _tipo, int _nivel, double _sueldo): 
            Colaborador(_nombre,_tipo, _nivel, _sueldo){
    estadisticas(_nivel);
}  
/**
 * Constructor de Enternador por default
 * Este constructor no recibe parametros, y asigna valores por default a las
 * variables de instancia, se apoya del constructor de la clase padre
 * 
 * @param
 * @return
*/
Entrenador::Entrenador(){
    nombre = "Entrenador";
    nivel = 0;
    sueldo = 0;
    estadisticas(nivel);
}

#endif