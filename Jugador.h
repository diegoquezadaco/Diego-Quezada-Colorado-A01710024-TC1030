#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>
#include "Colaborador.h"
using namespace std;
//Jugador hereda de Colaborador
class Jugador : public Colaborador {

    protected:

    int edad;
    string posicion;

    public:

    //Getters y setters
    int getEdad(){
        return edad;
    }
    string getPosicion(){
        return posicion;
    }
    void setEdad(int _edad){
        edad = 1+_edad;
    }
    void setPosicion(string _posicion){
        posicion = _posicion;
    }
    //Definimos esta funcion para hacer sobreescritura, pero no la vamos a usar
    void setEstadisticas(int _nivel){
        //Declaramos que las estadisticas dependen del nivel del jugador
        estadisticas[0] = 2*_nivel;
        estadisticas[1] = 2*_nivel;
    }
    //Definimos esta funcion para hacer sobreescritura, pero no la vamos a usar
    void mostrar_estadisticas(){
        //Mostramos las estadisticas del jugador con su nombre
        cout << "Jugador: " << nombre << endl;
        cout << "Estadisticas: " << estadisticas[0] << " " << estadisticas[1] << endl;
    }
    //Sobreescribimos setNivel, declarando que el nivel del jugador, disminuye o aumenta dependiendo de su edad y posicion
    void setNivel(){
        if (posicion == "Delantero" || posicion == "Medio"){
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
        else if (posicion == "Defensa" || posicion == "Portero"){
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
};
#endif