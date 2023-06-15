/**
 * Proyecto Integrador - TC1030
 * Proyecto presidente Cruz Azul FC
 * Diego Quezada Colorado A01710024
 * 08/06/2023   
 */
/**
 * Clase Colaborador
 * Esta clase es la clase padre de Jugador y Entrenador.
 * Esta clase se encarga de administrar los datos de los colaboradores
 * Es una clase abstracta
 * 
 */

#ifndef COLABORADOR_H
#define COLABORADOR_H
#include <iostream>
#include <string>
using namespace std;

//Clase abstracta Colaborador
class Colaborador {
        
    protected:
    //Declaro las variables de instancia
    string nombre;
    string tipo;
    int nivel;
    double sueldo;
        

    public: 

    //Declaro los metodos de clase
    string getNombre();
    string getTipo();
    int getNivel();
    double getSueldo();
    void setNivel(int _nivel);
    void setSueldo(double _sueldo);
    virtual void estadisticas(int _nivel)=0;
    virtual void setNivel()=0;
    void virtual mostrar_estadisticas()=0;

    Colaborador(string _nombre,string _tipo,int _nivel, double _sueldo);
    Colaborador();

};    

//Getters de los atributos
/**
 * Metodo getNombre()
 * Este metodo regresa el nombre del colaborador
 * 
 * @param
 * @return string: nombre
*/
string Colaborador::getNombre(){
    return nombre;
}
/**
 * Metodo getTipo()
 * Este metodo regresa el tipo del colaborador
 * 
 * @param
 * @return string: tipo
*/
string Colaborador::getTipo(){
    return tipo;
}
/**
 * Metodo getNivel()
 * Este metodo regresa el nivel del colaborador
 * 
 * @param
 * @return int: nivel
*/
int Colaborador::getNivel(){
    return nivel;
}
/**
 * Metodo getSueldo()
 * Este metodo regresa el sueldo del colaborador
 * 
 * @param
 * @return double: sueldo
*/
double Colaborador::getSueldo(){
    return sueldo; 
}
//Setters de los atributos
/**
 * Metodo setNivel()
 * Este metodo modifica el nivel del colaborador
 * 
 * @param int: _nivel
 * @return
*/
void Colaborador::setNivel(int _nivel){
    nivel = _nivel;
}
/**
 * Metodo setSueldo()
 * Este metodo modifica el sueldo del colaborador
 * 
 * @param double: _sueldo
 * @return
*/
void Colaborador::setSueldo(double _sueldo){
    sueldo = 1.08 * _sueldo;
}

/**
 * Constructor de Colaborador con parametros
 * Este constructor recibe de parametros nombre, tipo, nivel, sueldo y edad
 * y los asigna a las variables de instancia
 * 
 * @param string: _nom
 * @param string: _tipo
 * @param int: _niv
 * @param double: _sueldo
 * @return
 * 
*/
Colaborador::Colaborador(string _nom,string _tipo,int _niv, double _sueldo){
    
    nombre = _nom;
    tipo = _tipo;
    nivel = _niv;
    sueldo = _sueldo;
    }
/**
 * Constructor de Colaborador por default
 * Este constructor no recibe parametros y asigna valores por default a las
 * variables de instancia 
*/
Colaborador::Colaborador(){
    nombre = " ";
    tipo = " ";
    nivel = 0;
    sueldo = 0.0;;
}
    
#endif