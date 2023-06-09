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

    public:

    //Getters y setters
    int getEdad(){
        return edad;
    }
    string getPosicion(){
        return tipo;
    }
    void setEdad(){
        edad = 1+edad;
    }
    //Definimos esta funcion para hacer sobreescritura, pero no la vamos a usar
    virtual void setEstadisticas(int _nivel){
        estadisticas[0] = 1234;
        estadisticas[1] = 1234;
        }
    //Definimos esta funcion para hacer sobreescritura, pero no la vamos a usar
    virtual void mostrar_estadisticas(){
        cout << "Sin estadisticas"<< endl;
    }
    //Sobreescribimos setNivel, declarando que el nivel del jugador, disminuye o aumenta dependiendo de su edad y posicion
    void setNivel(){
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
    //Creamos un constructor por parametros, apoyandonos de la clase madre Colaborador
    Jugador(string _nombre, string _tipo, int _nivel, double _sueldo, int _edad): Colaborador(_nombre, _tipo, _nivel, _sueldo){
        edad = _edad;
    }
    //Creamos un constructor por default
    Jugador(): Colaborador(){
        edad = 0;           
        setEstadisticas(nivel);
    }
};
#endif