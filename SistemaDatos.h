#ifndef SISTEMADATOS_H
#define SISTEMADATOS_H
#include <iostream>
#include <string>
using namespace std;
#include "Colaborador.h"

class SistemaDatos {

    private:

    Colaborador * plantilla[30];
    double presupuesto=0; //El presupuesto inicial del equipo es de 0
    Colaborador * traspasos[50];
    int resultados;
    double nivel_equipo[30];

    public:

    //getters y setters
    Colaborador * getPlantilla(){
        return *plantilla;
    }
    double getPresupuesto(){
        return presupuesto;
    }
    Colaborador * getTraspasos(){
        return *traspasos;
    }
    int getResultados(){
        return resultados;
    }
    double getNivel_equipo(){
        return *nivel_equipo;
    }
    void setPlantilla(Colaborador * _plantilla[]){
        *plantilla = *_plantilla;
    }
    void setPresupuesto(int _resultado){
        //Declaramos que el presupuesto depende de los resultados del equipo
        presupuesto = 1200 - (50 * (_resultado - 1)); 
    }
    void setNivelEquipo(double _nivel_equipo[]){
        *nivel_equipo = *_nivel_equipo;
    }
    void setNivelEquipo(Colaborador * _plantilla[]){
        //Declaramos que el nivel del equipo depende de los jugadores que lo conforman
        for (int i = 0; i < 30; i++){
            nivel_equipo[i] = _plantilla[i]->getNivel();
        }
    }
    void setResultados(int _resultados){
        resultados = _resultados;
    }
    void setResultados (double _nivel_equipo[]){
        //Declaramos que los resultados dependen de los jugadores que conforman el equipo, y de su nivel
        //Sacamos el promedio de los niveles de los colaboradores y eso nos dara su posición en tabla del 1 al 18
        double promedio = 0;
        for (int i = 0; i < 30; i++){
            promedio += _nivel_equipo[i];
        }
        promedio = promedio / 30;
        //Si el promedio es 90 o mayor, el equipo quedara en primer lugar
        //Si el promedio es 55 o menor, el equipo quedara en ultimo lugar es decir resultados seria 18
        //Si el promedio es 56 o mayor y 89 o menor, el equipo quedara en su correspondiente posicion
        if (promedio >= 90){
            resultados = 1;
        }
        else if (promedio <= 55){
            resultados = 18;
        }
        else{
            resultados = 18 - (int)((promedio - 55) / 2);
        }
    }
        


    void crea_plantilla_actual() {
        //Definimos los jugadores actuales del Cruz Azul
        plantilla[0] = new Colaborador("Jose de Jesus Corona", 74, 38.595, 01);
        plantilla[1] = new Colaborador("Andrés Gudiño",68, 6.432, 02);
        plantilla[2] = new Colaborador("Sebastián Jurado", 68, 14.294, 03);
        plantilla[3] = new Colaborador("Juan Escobar", 75, 38.595, 04);
        cout << "Se ha creado la plantilla actual del Cruz Azul" << endl;

       
        
    }
    //Constructor
    SistemaDatos(){
        crea_plantilla_actual();
    }
    //Constructor con parametros
    SistemaDatos(Colaborador * _plantilla[], int _resultados, double _nivel_equipo[]){
        setPlantilla(_plantilla);
        setPresupuesto(_resultados);
        setResultados(_resultados);
        setNivelEquipo(_nivel_equipo);
    }

};
#endif