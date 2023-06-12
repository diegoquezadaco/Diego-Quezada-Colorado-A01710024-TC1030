/*
 * Proyecto Integrador - TC1030
    * Proyecto presidente Cruz Azul FC
    * Diego Quezada Colorado A01710024
    * 08/06/2023   
*/
/*
 *Clase SistemaDatos 
 *
 
 */




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
    //Declaramos los atributos de un equipo, variables de instancia

    Colaborador * plantilla[35]; //Dejamos 5 vacios para que se pueda pasar
    double presupuesto=0; //El presupuesto inicial del equipo es de 0
    Colaborador * traspasos[50];
    int resultados;
    double nivel_equipo[30];
    string nombres_random[40];

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
        Colaborador *c1 = new Defensivo("Sergio Ramos", "Defensa", 84, 144.107, 34);
        traspasos[0] = c1;
        Colaborador *c2 = new Defensivo("David Alaba", "Defensa", 86, 189.09, 29);
        traspasos[1] = c2;
        Colaborador *c3 = new Defensivo("Virgil van Dijk", "Defensa", 90, 189.09, 30);
        traspasos[2] = c3;
        Colaborador *c4 = new Defensivo("Trent Alexander-Arnold", "Defensa", 87, 189.09, 23);
        traspasos[3] = c4;
        Colaborador *c5 = new Defensivo("Andrew Robertson", "Defensa", 87, 189.09, 27);
        traspasos[4] = c5;
        Colaborador *c6 = new Defensivo("Joe Gomez", "Defensa", 90, 189.09, 29);
        traspasos[5] = c6;
        Colaborador *c7 = new Defensivo("Aymeric Laporte", "Defensa", 87, 189.09, 27);
        traspasos[6] = c7;
        Colaborador *c8 = new Defensivo("Raphael Varane", "Defensa", 86, 189.09, 28);
        traspasos[7] = c8;
        traspasos[8] = new Defensivo("Kalidou Koulibaly", "Defensa", 88, 189.09, 30);
        traspasos[9] = new Defensivo("Marquinhos", "Defensa", 87, 189.09, 27);
        traspasos[10] = new Defensivo("Alisson", "Portero", 90, 189.09, 29);
        traspasos[11] = new Defensivo("Marc-Andre ter Stegen", "Portero", 90, 189.09, 29);
        traspasos[12] = new Defensivo("Jan Oblak", "Portero", 91, 189.09, 28);
        traspasos[13] = new Atacante("Pedro Gonzalez Lopez", "Medio", 85, 189.09, 28);
        traspasos[14]= new Atacante("Kevin De Bruyne", "Medio", 91, 189.09, 30);
        traspasos[15] = new Atacante("Luka Modric", "Medio", 87, 189.09, 36);
        traspasos[16] = new Atacante("N'Golo Kante", "Medio", 88, 189.09, 30);
        traspasos[17] = new Atacante("Frenkie de Jong", "Medio", 87, 189.09, 24);
        traspasos[18] = new Atacante("Bruno Fernandes", "Medio", 88, 189.09, 27);
        traspasos[19] = new Atacante("Toni Kroos", "Medio", 88, 189.09, 31);
        traspasos[20] = new Atacante("Joshua Kimmich", "Medio", 88, 189.09, 26);
        traspasos[21] = new Atacante("Casemiro", "Medio", 89, 189.09, 29);
        traspasos[22] = new Atacante("Jordan Henderson", "Medio", 86, 189.09, 31);
        traspasos[23] = new Atacante("Sadio Mane", "Medio", 89, 189.09, 29);
        traspasos[24] = new Atacante("Raheem Sterling", "Medio", 89, 189.09, 26);
        traspasos[25] = new Atacante("Lionel Messi", "Delantero", 93, 189.09, 34);
        traspasos[25] = new Atacante("Cristiano Ronaldo", "Delantero", 92, 189.09, 36);
        traspasos[26] = new Atacante("Kylian Mbappe", "Delantero", 91, 189.09, 22);
        traspasos[27]= new Atacante("Neymar Jr", "Delantero", 91, 189.09, 29);
        traspasos[28] = new Atacante("Robert Lewandowski", "Delantero", 92, 189.09, 33);
        traspasos[29] = new Atacante("Karim Benzema", "Delantero", 89, 189.09, 33);
        traspasos[30] = new Atacante("Erling Haaland", "Delantero", 89, 189.09, 21);
        traspasos[31] = new Atacante("Harry Kane", "Delantero", 89, 189.09, 28);
        traspasos[32] = new Atacante("Mohamed Salah", "Delantero", 89, 189.09, 29);
        traspasos[33] = new Entrenador("Jose Mourinho", "Entrenador", 89, 189.09);
        traspasos[34] = new Entrenador("Pep Guardiola", "Entrenador", 89, 189.09);
        traspasos[35] = new Entrenador("Jurgen Klopp", "Entrenador", 89, 189.09);
        traspasos[36] = new Entrenador("Zinedine Zidane", "Entrenador", 89, 189.09);
        traspasos[37] = new Entrenador("Diego Simeone", "Entrenador", 89, 189.09);
        traspasos[38] = new Entrenador("Carlo Ancelotti", "Entrenador", 89, 189.09);
        traspasos[39] = new Entrenador("Julian Nagelsmann", "Entrenador", 89, 189.09);
        traspasos[40] = new Entrenador("Mauricio Pochettino", "Entrenador", 89, 189.09);
        traspasos[41] = new Entrenador("Antonio Conte", "Entrenador", 89, 189.09);
        traspasos[42] = new Entrenador("Ronald Koeman", "Entrenador", 89, 189.09);
        traspasos[43] = new Entrenador("Ole Gunnar Solskjaer", "Entrenador", 89, 189.09);
        traspasos[44] = new Entrenador("Brendan Rodgers", "Entrenador", 89, 189.09);
        traspasos[45] = new Entrenador("Marcelo Bielsa", "Entrenador", 89, 189.09);
        traspasos[46] = new Entrenador("Gian Piero Gasperini", "Preparador fisico", 89, 189.09);
        traspasos[47] = new Entrenador("Thomas Tuchel", "Entrenador", 89, 189.09);
        traspasos[48] = new Entrenador("Ralph Hasenhuttl", "Entrenador de porteros", 89, 189.09);
        traspasos[49] = new Entrenador("Steven Gerrard", "Entrenador de porteros", 89, 189.09);
        traspasos[50] = new Entrenador("Mikel Arteta", "Entrenador de porteros", 89, 189.09);
        

    }
    void setNivelEquipo(double _nivel_equipo[]){
        *nivel_equipo = *_nivel_equipo;
    }
    void setNivelEquipo(){
        //Declaramos que el nivel del equipo depende de los jugadores que lo conforman
        for (int i = 0; i < 30; i++){
            nivel_equipo[i] = plantilla[i]->getNivel();
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
    void setNombresRandom(){
        nombres_random[0] = "Jose Luis Hernandez";
        nombres_random[1] = "Miguel Angel Rodriguez";
        nombres_random[2] = "Carlos Hernandez Garcia";
        nombres_random[3] = "Juan Antonio Lopez";
        nombres_random[4] = "Pedro Martinez Fernandez";
        nombres_random[5] = "Luis Alberto Sanchez";
        nombres_random[6] = "Fernando Gonzalez Ramirez";
        nombres_random[7] = "Jorge Torres Diaz";
        nombres_random[8] = "Alejandro Vargas Herrera";
        nombres_random[9] = "Ricardo Rivera Jimenez";
        nombres_random[10] = "Mario Mendoza Ortiz";
        nombres_random[11] = "Eduardo Paredes Castro";
        nombres_random[12] = "Ruben Silva Navarro";
        nombres_random[13] = "Sergio Morales Ruiz";
        nombres_random[14] = "Adrian Aguilar Medina";
        nombres_random[15] = "Francisco Rios Soto";
        nombres_random[16] = "Victor Castillo Chavez";
        nombres_random[17] = "Daniel Cardenas Figueroa";
        nombres_random[18] = "Oscar Cruz Nuñez";
        nombres_random[19] = "Roberto Contreras Pineda";
        nombres_random[20] = "Hector Peralta Ibarra";
        nombres_random[21] = "Javier Arellano Rosas";
        nombres_random[22] = "Angel Valdez Torres";
        nombres_random[23] = "Guillermo Pacheco Delgado";
        nombres_random[24] = "Ernesto Navarro Bravo";
        nombres_random[25] = "Manuel Sandoval Rangel";
        nombres_random[26] = "Andres Romero Cervantes";
        nombres_random[27] = "Gabriel Herrera Villegas";
        nombres_random[28] = "Arturo Fuentes Mendoza";
        nombres_random[29] = "Omar Calderon Ortega";
        nombres_random[30] = "Pablo Soto Cruz";
        nombres_random[31] = "Antonio Sosa Vargas";
        nombres_random[32] = "Raul Bautista Morales";
        nombres_random[33] = "Emilio Pineda Cordero";
        nombres_random[34] = "Julio Villegas Solorio";
        nombres_random[35] = "Cesar Salazar Mondragon";
        nombres_random[36] = "Rodrigo Calderon Guerrero";
        nombres_random[37] = "Ignacio Montes Rojas";
        nombres_random[38] = "Francisco Luna Rios";
        nombres_random[39] = "Lorenzo Mora Hidalgo";
    }
        


    void crea_plantilla_actual() {
        //Definimos los jugadores actuales del Cruz Azul
        Colaborador * c1 = new Defensivo("Jesus Corona", "Portero", 74, 38.595, 42);
        Colaborador * c2 = new Defensivo("Andres Gudino", "Portero",68, 6.432, 27);
        Colaborador * c3 = new Defensivo("Sebastian Jurado", "Portero", 68, 14.294, 25);
        plantilla[0] = c1;
        plantilla[1] = c2;
        plantilla[2] = c3;        
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
            if (plantilla[i] != nullptr && plantilla[i]->getNivel() != 0) {
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
            cout <<"____________________________________________________"<< endl;
    }
    void despedir_colaborador(string nombre) {
        for (int i = 0; i < 30; i++) {
            if (plantilla[i] != nullptr && plantilla[i]->getNombre() == nombre) {
                plantilla[i] = nullptr;
            }
        }
        //hacemos un for para recorrer la plantilla al lugar que se quedó vacio lo movemos una posición a la izquierda
        for (int i = 0; i < 30; i++) {
            if (plantilla[i] == nullptr) {
                for (int j = i; j < 30; j++) {
                    plantilla[j] = plantilla[j - 1];
                    plantilla [j] = nullptr;
                }
            }
        }
        cout << "El colaborador " << nombre << " ha sido despedido exitosamente" << endl;
    }
    void contratar_colaborador(string nombre) {
        for (int i = 0; i < 30; i++) {
            if (traspasos[i]->getNombre() == nombre) {
                for (int j = 0; j < 30; j++) {
                    if (plantilla[j] == nullptr) {
                        plantilla[j] = traspasos[i];
                        traspasos[i] = nullptr;
                        break;
                    }
                }
            }
        }
    }
    void subir_canterano(string posicion){
        if (posicion== "Portero" || posicion=="Defensa"){
            for (int i = 0; i < 30; i++) {
                if (plantilla[i] == nullptr) {
                    for (int k = 0; k < 50; k++) {
                        if (nombres_random[k] != "") {
                            plantilla[i] = new Defensivo(nombres_random[k], posicion, 65, 0.1, 16);
                            nombres_random[k] = "";
                        }
                    }
                }
            }
        }
        else if (posicion == "Medio" || posicion == "Delantero") {
            for (int i = 0; i < 30; i++) {
                if (plantilla[i] == nullptr) {
                    for (int k = 0; k < 50; k++) {
                        if (nombres_random[k] != "") {
                            plantilla[i] = new Atacante(nombres_random[k], posicion, 65, 0.1, 16);
                            nombres_random[k] = "";
                        }
                    }
                }
            }
        }
        cout << "El canterano ha sido subido exitosamente" << endl;
    }
    void buscar_colaborador(string nombre) {
        for (int i = 0; i < 30; i++) {
            if (plantilla[i] != nullptr && plantilla[i]->getNombre() == nombre) {
                plantilla[i]->mostrar_estadisticas();
            }
        }
    }
    int pasar_temporada() {
        int parametro = 1;
        for (int i = 0; i < 30; i++) {
            if (plantilla[i] != nullptr) {
                if (plantilla[i]->getTipo() == "Portero" || plantilla[i]->getTipo() == "Defensa"|| plantilla[i]->getTipo() == "Medio" || plantilla[i]->getTipo() == "Delantero") {
                    ((Jugador*)plantilla[i])->setNivel();
                    ((Jugador*)plantilla[i])->setEdad();
                    if (((Jugador*)plantilla[i])->getEdad() >= 38) {
                        despedir_colaborador(plantilla[i]->getNombre());
                    }
                }
                else {
                    ((Entrenador*)plantilla[i])->setNivel();
                }
            }
        }
        setNivelEquipo();
        int resultaditos;
        resultaditos = getResultados();
        setResultados(nivel_equipo);
        setPresupuesto(resultados);
        int contador = 0;
        for (int i = 0; i < 30; i++) {
            if (plantilla[i] != nullptr) {
                contador++;
            }
        }
        if (contador <= 20 || contador >= 30) {
            cout << "Se salió de los limites previamente establicidos" << endl;
            cout << "Queda oficialmente despedido como presidente del Cruz Azul FC, intentalo de nuevo" << endl;
            parametro = 0;
        }
        if (resultados <= resultaditos) {
            cout << "Quedó en un lugar en la tabla inferior al que quedó en la temporada pasada" << endl;
            cout << "En la temprada pasada quedo en el lugar " << resultaditos << " y en esta temporada quedo en el lugar " << resultados << endl;
            cout << "Queda oficialmente despedido como presidente del Cruz Azul FC, intentalo de nuevo" << endl;
            parametro = 0;
        }
        return parametro;
    }


    //Constructor
    SistemaDatos(){
        crea_plantilla_actual();
        setTraspasos();
        setNombresRandom();
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