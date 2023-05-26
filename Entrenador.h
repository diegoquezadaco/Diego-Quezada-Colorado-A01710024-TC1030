#ifndef ENTRENADOR_H
#define ENTRENADOR_H
#include <iostream>
#include <string>
using namespace std;
#include "Colaborador.h"
//Entrenador hereda de Colaborador
class Entrenador : public Colaborador {

    private:
    int victorias;
    int derrotas;
    
    public:
    void setEstadisticas(int  nivel){
        //Declaramos que si el nivel esta es menor de 55, el entrenador tendra 3 victorias y 14 derrotas
        //Si el nivel es mayor o igual a 90, el entrenador tendra 14 victorias y 3 derrotas
        //Si esta entre 56 y 89, el entrenador tendra sus victorias y derrotas correspondientes a su nivel
        if (nivel < 55){
            victorias = 3;
            derrotas = 14;
        }
        else if (nivel >= 90){
            victorias = 14;
            derrotas = 3;
        }
        else{
            victorias = (int)(nivel / 10);
            derrotas = 17 - victorias;
        }

    }
    void setNivel(){
        // Declaramos que el nivel del entrenador aumenta ligeramente conforme pasan los años
        nivel = nivel + (rand() % 2);
    }
    void mostrar_estadisticas(){
        //Mostramos las estadisticas del entrenador con su nombre
        cout << "Entrenador: " << nombre << endl;
        cout << "Victorias: " << victorias << endl;
        cout << "Derrotas: " << derrotas << endl;
    }
    //Declaramos el constructor por parametros del entrenador, apoyandonos de su clase madre Colaborador
    Entrenador(string _nombre, int _nivel, double _sueldo, int _identificador): Colaborador(_nombre, _nivel, _sueldo, _identificador){
        setEstadisticas(nivel);
    }
    //Declaramos constructor por default
    Entrenador(){
        nombre = "Entrenador";
        nivel = 0;
        sueldo = 0;
        identificador = 0;
        setEstadisticas(nivel);
    }
    //Declaramos getters y setters
    int getVictorias(){
        return victorias;
    }   
    int getDerrotas(){
        return derrotas;
    }
    void setVictorias(int _victorias){
        victorias = _victorias;
    }
    void setDerrotas(int _derrotas){
        derrotas = _derrotas;
    }
    
};

#endif