#ifndef SISTEMADATOS_H
#define SISTEMADATOS_H
#include <iostream>
#include <string>
using namespace std;
#include "Colaborador.h"
#include "Atacante.h"
#include "Entrenador.h"
#include "Defensivo.h"
#include "Jugador.h"

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
    void setTraspasos(){
        //Importamos los niveles de FIFA 23 de los jugadores que se pueden comprar
        traspasos[0] = new Defensivo("Sergio Ramos", "Defensa", 84, 144.107, 34);
        traspasos[1] = new Defensivo("David Alaba", "Defensa", 86, 189.09, 29);
        traspasos[2] = new Atacante("Pedro Gonzalez Lopez", "Medio", 85, 189.09, 28);

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
        plantilla[0] = new Defensivo("Jose de Jesus Corona","Portero", 74, 38.595, 42);
        plantilla[1] = new Atacante("Carlos Rodriguez", "Medio", 74, 28.589, 26);
        plantilla[2] = new Entrenador("Ricardo Ferretti", "Director Tecnico",82 , 76.10);
        plantilla[1] = new Defensivo("Andres Gudino", "Portero",68, 6.432, 27);
        plantilla[2] = new Defensivo("Sebastian Jurado", "Portero", 68, 14.294, 25);
        plantilla[3] = new Defensivo("Juan Escobar", "Defensa",75, 1.572, 27);
        plantilla[4] = new Defensivo("Julio Cesar Dominguez", "Defensa", 71, 20.012, 35);
        plantilla[5] = new Defensivo("Jordan Silva", "Defensa", 70, 0.572, 28);
        plantilla[6] = new Defensivo("Ramiro Funes Mori", "Defensa", 71, 17.153, 32);
        plantilla[7] = new Defensivo("Carlos Vargas", "Defensa", 67, 1.572, 34);
        plantilla[8] = new Defensivo("Rafael Guerrero", "Defensa", 75, 0.142, 20);
        plantilla[9] = new Defensivo("Ignacio Rivero", "Defensa", 74, 5.86, 30);
        plantilla[10] = new Defensivo("Jose Joaquin Martinez", "Defensa", 71, 11.758, 36);
        plantilla[11] = new Defensivo("Rodrigo Huescas", "Defensa", 69, 0.3, 19);
        plantilla[12] = new Atacante("Carlos Rodriguez", "Medio", 74, 28.589, 26);
        plantilla[13] = new Atacante("Alexis Gutierrez", "Medio", 67, 1.272, 23);
        plantilla[14] = new Atacante("Erik Lira", "Medio", 73, 20.012, 23);
        plantilla[15] = new Atacante("Ramiro Carrera", "Medio", 72, 11.578, 29);
        plantilla[16] = new Atacante("Rafael Baca", "Medio", 69, 11.435, 33);
        plantilla[17] = new Atacante("Uriel Antuna", "Medio", 74, 15.724, 25);
        plantilla[18] = new Atacante("Carlos Rotondi", "Medio", 73, 1.372, 26);
        plantilla[19] = new Atacante("Ivan Morales", "Delantero", 66, 8.719, 23);
        plantilla[20] = new Atacante("Christian Tabo", "Delantero", 72, 9.219, 29);
        plantilla[21] = new Atacante("Gonzalo Carneiro", "Delantero", 71, 1.715, 27);
        plantilla[22] = new Atacante("Augusto Lotti", "Delantero", 70, 0.443, 26);
        plantilla[23] = new Atacante("Michael Estrada", "Delantero", 69, 18.583, 20);
        plantilla[24] = new Atacante("Miguel Sesena", "Delantero", 60, 0.142, 20);
        plantilla[25] = new Entrenador("Ricardo Ferretti", "Director Tecnico",82 , 76.10);
        plantilla[26] = new Entrenador("Oscar Perez Rojas", "Entrenador de porteros", 79, 22.5);
        plantilla[27] = new Entrenador("Gustavo Leombruno", "Preparador fisico", 72, 10.4);
        
    }


    //Hacemos una función para imprimir los datos de la plantilla
    //Esta función demuestra el uso de polimorfismo

    void imprimeDatos() {
    cout << "Plantilla: " << endl;
    for (int i = 0; i < 30; i++) {
        if (plantilla[i]->getNivel() != 0){
            if (plantilla[i]->getTipo() == "Defensa" || plantilla[i]->getTipo() == "Portero") {
                ((Defensivo*)plantilla[i])->mostrar_estadisticas();
            }
            else if (plantilla[i]->getTipo() == "Medio" || plantilla[i]->getTipo() == "Delantero") {
                ((Atacante*)plantilla[i])->mostrar_estadisticas();
            }
            else if (plantilla[i]->getTipo() == "Director Tecnico" || plantilla[i]->getTipo() == "Entrenador de porteros" || plantilla[i]->getTipo() == "Preparador fisico") {
                ((Entrenador*)plantilla[i])->mostrar_estadisticas();
        }
        }

    }
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