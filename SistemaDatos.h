/*
 * Proyecto Integrador - TC1030
 * Proyecto presidente Cruz Azul FC
 * Diego Quezada Colorado A01710024
 * 08/06/2023   
 */

/*
 *Clase SistemaDatos 
 * Es la clase que se compone de los colaboradores, 
 * divididos en entrenadores y jugadores y los jugadores
 * se dividen en atacantes y defensivos
 * 
 * Esta clase tiene todos los metodos para interactuar con el equipo
 * mismos referentes a la plantilla, los traspasos, el presupuesto, etc 
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

    Colaborador * plantilla[35]; //Arreglo de apuntadores de colaboradores
    double presupuesto;
    double nivel_equipo;
    Colaborador * traspasos[50]; //Arreglo de apuntadores de colaboradores
    int resultados;
    string nombres_random[40]; //Arreglo de nombres random para los canteranos

    public:

    //Declaro los metodos de la clase 
    SistemaDatos();
    SistemaDatos(int _resultados , double _presupuesto);

    double getPresupuesto();
    double getPresupuesto(int _resultado);
    int getResultados();
    double getNivelEquipo();
    void setPresupuesto(int _resultado);
    void setTraspasos();
    void setResultados(int _resultados);
    void setResultados();
    void setNombresRandom();
    void crea_plantilla_actual();
    void imprimeDatos();
    void despedir_colaborador(string nombre);
    void contratar_colaborador();
    void subir_canterano(string posicion);
    void buscar_colaborador(string nombre);
    void restar_sueldos();
    int pasar_temporada();

};

//Getters de los atributos



/**
 * Metodo getPresupuesto()
 * Este metodo se encarga de obtener el valor del presupuesto del equipo 
 * sin haber modificado nada
 * 
 * @param
 * @return double: presupuesto, sin modificar
 */
double SistemaDatos::getPresupuesto() {
    return presupuesto;
}
/**
 * Metodo getPresupuesto (int _resultados)
 * Este metodo se encarga de obtener el presupuesto del equipo en 
 * base a los resultados obtenidos en la temporada, llama a las
 * funciones de setPresupuesto y restar_sueldos es la funcion que se 
 * utiliza para que el usuario pueda conocer el presupuesto que tiene
 * disponible antes de contratar un nuevo colaborador
 * 
 * @param int: _resultado 
 * @return double: presupuesto disponible
 */
double SistemaDatos::getPresupuesto(int _resultado) {    
    setPresupuesto(_resultado);
    restar_sueldos();
    return presupuesto;
}
/**
 * Metodo getResultados()
 * Este metodo se encarga de obtener el valor de los resultados del equipo
 * este resultado es la posicion en tabla del equipo en esa temporada 
 * puede ir del 1 al 18
 *
 * @param 
 * @return int: resultados del equipo 
 */
int SistemaDatos::getResultados() {           
    return resultados;
}

/**
 * Metodo getNivelEquipo()
 * Este metodo se encarga de obtener el nivel del equipo en base a los
 * niveles de los jugadores que lo componen, es un promedio de los niveles
 * de los colaboradores que componen a la plantilla
 * 
 * @param
 * @return double: nivel del equipo
 */
double SistemaDatos::getNivelEquipo() {
    double promedio = 0.0;
    int contador = 0;
    for (int i = 0; i < 34; i++) {
        if (plantilla[i] != nullptr) {
            promedio += plantilla[i]->getNivel();
            contador++;
        }
    }
    if (contador != 0) {
        nivel_equipo = promedio / contador;
    }
    return nivel_equipo;
}

//setters de los atributos

/**
 * Metodo setPresupuesto (int _resultado)
 * Este metodo se encarga de modificar el presupuesto del equipo en base
 * a los resultados obtenidos en la temporada
 * 
 * @param int: _resultado
 * @return
*/
void SistemaDatos::setPresupuesto(int _resultado){
    presupuesto = 1500 - (50 * (_resultado - 1)); 
    presupuesto = presupuesto * 1.1;
}
/**
 * Metodo setTraspasos()
 * Este metodo se encarga de establecer los colaboradores que estan
 * disponibles para contratarse, siempre son los mismos, y conforme vas
 * contratando colaboradores, se va vaciando
 * 
 * @param
 * @return
*/
void SistemaDatos::setTraspasos(){
    traspasos[0] = new Defensivo("Sergio Ramos", "Defensa", 84, 144.107,
                                    34);
    traspasos[1] = new Defensivo("David Alaba", "Defensa", 86, 362, 29);
    traspasos[2] = new Defensivo("Virgil van Dijk", "Defensa", 90,
                                    269.21, 30);
    traspasos[3] = new Defensivo("Trent Alexander Arnold", "Defensa", 87, 
                                    121, 23);
    traspasos[4] = new Defensivo("Andrew Robertson", "Defensa", 87, 95.5,
                                    27);
    traspasos[5] = new Defensivo("Joe Gomez", "Defensa", 90, 65.3, 29);
    traspasos[6] = new Defensivo("Aymeric Laporte", "Defensa", 87, 
                                    102.8, 27);
    traspasos[7] = new Defensivo("Raphael Varane", "Defensa", 86,
                                    150.4, 28);
    traspasos[8] = new Defensivo("Kalidou Koulibaly", "Defensa", 88,
                                    69.7, 30);
    traspasos[9] = new Defensivo("Marquinhos", "Defensa", 87, 156.8, 27);
    traspasos[10] = new Defensivo("Alisson", "Portero", 90, 200.4, 29);
    traspasos[11] = new Defensivo("Marc-Andre ter Stegen", "Portero", 90,
                                    181.6, 29);
    traspasos[12] = new Defensivo("Jan Oblak", "Portero", 91, 250.4, 28);
    traspasos[13] = new Atacante("Pedro Gonzalez Lopez", "Medio", 85, 94.2,
                                    28);
    traspasos[14] = new Atacante("Kevin De Bruyne", "Medio", 91, 300.2,
                                    30);
    traspasos[15] = new Atacante("Luka Modric", "Medio", 87, 288.9, 36);
    traspasos[16] = new Atacante("N Golo Kante", "Medio", 88, 351.7, 30);
    traspasos[17] = new Atacante("Frenkie de Jong", "Medio", 87, 156.2,
                                    24);
    traspasos[18] = new Atacante("Bruno Fernandes", "Medio", 88, 271.3,
                                    27);
    traspasos[19] = new Atacante("Toni Kroos", "Medio", 88, 325.7, 31);
    traspasos[20] = new Atacante("Joshua Kimmich", "Medio", 88, 196.1,26);
    traspasos[21] = new Atacante("Casemiro", "Medio", 89, 304.8, 29);
    traspasos[22] = new Atacante("Jordan Henderson", "Medio",86,282.4,31);
    traspasos[23] = new Atacante("Sadio Mane", "Medio", 89, 277.4, 29);
    traspasos[24] = new Atacante("Raheem Sterling", "Medio", 89,147.5,26);
    traspasos[25] = new Atacante("Lionel Messi", "Delantero",93,740.7,34);
    traspasos[25] = new Atacante("Cristiano Ronaldo", "Delantero", 92,
                                    3720.4, 36);
    traspasos[26] = new Atacante("Kylian Mbappe", "Delantero", 91, 729.1,
                                    22);
    traspasos[27] = new Atacante("Neymar Jr", "Delantero", 91, 625.9, 29);
    traspasos[28] = new Atacante("Robert Lewandowski", "Delantero", 92,
                                    364.9, 33);
    traspasos[29] = new Atacante("Karim Benzema", "Delantero", 89, 431.8,
                                    33);
    traspasos[30] = new Atacante("Erling Haaland", "Delantero", 89,
                                    395.4, 21);
    traspasos[31] = new Atacante("Harry Kane", "Delantero", 89, 261.7,28);
    traspasos[32] = new Atacante("Mohamed Salah", "Delantero", 89, 247.4,
                                    29);
    traspasos[33] = new Entrenador("Jose Mourinho", "Entrenador", 94,
                                    1005.7);
    traspasos[34] = new Entrenador("Pep Guardiola", "Entrenador",97,
                                    2400.8);
    traspasos[35] = new Entrenador("Jurgen Klopp", "Entrenador",91,975.4);
    traspasos[36] = new Entrenador("Zinedine Zidane", "Entrenador", 92,
                                    1541.3);
    traspasos[37] = new Entrenador("Diego Simeone", "Entrenador", 88,
                                    1274.8);
    traspasos[38] = new Entrenador("Carlo Ancelotti", "Entrenador", 92,
                                    1877.7);
    traspasos[39] = new Entrenador("Julian Nagelsmann", "Entrenador", 80,
                                    504.9);
    traspasos[40] = new Entrenador("Mauricio Pochettino", "Entrenador",85,
                                    856.1);
    traspasos[41] = new Entrenador("Antonio Conte", "Entrenador", 87,
                                    1028.4);
    traspasos[42] = new Entrenador("Ronald Koeman","Entrenador",84,856.1);
    traspasos[43] = new Entrenador("Ole Gunnar Solskjaer", "Entrenador",
                                    83,695.7 );
    traspasos[44] = new Entrenador("Brendan Rodgers", "Entrenador", 76,
                                    504.9);
    traspasos[45] = new Entrenador("Marcelo Bielsa", "Preparador fisico",
                                    82, 324.9);
    traspasos[46] = new Entrenador("Gian Piero Gasperini",
                                    "Preparador fisico", 83, 350.1);
    traspasos[47] = new Entrenador("Thomas Tuchel", "Preparador fisico", 
                                    91, 452.1);
    traspasos[48] = new Entrenador("Ralph Hasenhuttl",
                                    "Entrenador de porteros", 84, 364.2);
    traspasos[49] = new Entrenador("Steven Gerrard", 
                                    "Entrenador de porteros", 92, 379.1);
    traspasos[50] = new Entrenador("Mikel Arteta", 
                                    "Entrenador de porteros", 95, 408.5);
}
/**
 * Metodo setResultados(int _resultados)
 * Este metodo asigna un valor al parametro de SistemaDatos de resultados
 * Este puede variar entre el 1 y el 18
 * 
 * @param int: _resultados
 * @return
*/
void SistemaDatos::setResultados(int _resultados){
    resultados = _resultados;
}
/**
 * Metodo setResultados()
 * Este metodo establece los resultados del equipo en base del nivel promedio
 * que tienen los colaboradores de la plantilla y en base a eso le asigna un
 * resultado en la tabla entre el 1 y el 18
 * 
 * @param
 * @return
*/
void SistemaDatos::setResultados (){
    double promedio;
    promedio = getNivelEquipo();
    if (promedio >= 81){
        resultados = 1;
    }
    else if (promedio <= 55){
        resultados = 18;
    }
    else{
        resultados = 18 - ((promedio - 47) / 2);
    }
}
/**
 * Metodo setNombresRandom()
 * Este metodo le asigna valores por default al arreglo de strings 
 * "nombres_random", estos son los nombres que se asignaran automáticamente
 * a los canteranos que el usuario decida subir al primer equipo
 * 
 * @param
 * @return
*/
void SistemaDatos::setNombresRandom(){
    nombres_random[0] = "Stephan Gay Galindo";
    nombres_random[1] = "Miguel Angel Rodriguez";
    nombres_random[2] = "Carlos Hernandez Garcia";
    nombres_random[3] = "Juan Antonio Lopez";
    nombres_random[4] = "Diego Lira Garcia";
    nombres_random[5] = "Luis Alberto Sanchez";
    nombres_random[6] = "Fernando Gonzalez Ramirez";
    nombres_random[7] = "Jorge Espinosa Callejas";
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
    
/**
 * Metodo crea_plantilla_actual()
 * Este metodo asigna valores a el arreglo de apuntadores de colaborador que
 * es la plantilla, le asignamos los jugadores que actualmente conforman a la
 * plantilla deel cruz azul, para ello utilizamos los constructores por 
 * paso de parametros de Atacante, Defensivo y Entrenador
 * 
 * @param
 * @return 
*/

void SistemaDatos::crea_plantilla_actual() {
    //Definimos los jugadores actuales del Cruz Azul
    plantilla[0] = new Defensivo("Jesus Corona","Portero",74,38.595,42);
    plantilla[1] = new Defensivo("Andres Gudino", "Portero",68,6.432,27);
    plantilla[2] = new Defensivo("Sebastian Jurado", "Portero", 68,
                                    14.294, 25);       
    plantilla[3] = new Defensivo("Juan Escobar", "Defensa",75, 1.572, 27);
    plantilla[4] = new Defensivo("Julio Cesar Dominguez", "Defensa", 71,
                                    20.012, 35);
    plantilla[5] = new Defensivo("Jordan Silva", "Defensa", 70,0.572,28);
    plantilla[6] = new Defensivo("Ramiro Funes Mori", "Defensa", 71,
                                    17.153, 32);
    plantilla[7] = new Defensivo("Carlos Vargas", "Defensa",67,1.572,34);
    plantilla[8] = new Defensivo("Rafael Guerrero","Defensa",75,0.142,20);
    plantilla[9] = new Defensivo("Ignacio Rivero", "Defensa",74,5.86,30);
    plantilla[10] = new Defensivo("Jose Joaquin Martinez", "Defensa", 71,
                                    11.758, 36);
    plantilla[11] = new Defensivo("Rodrigo Huescas", "Defensa", 69, 0.3,
                                    19);
    plantilla[12] = new Atacante("Carlos Rodriguez", "Medio", 74, 28.589,
                                    26);
    plantilla[13] = new Atacante("Alexis Gutierrez","Medio",67,1.272,23);
    plantilla[14] = new Atacante("Erik Lira", "Medio", 73, 20.012, 23);
    plantilla[15] = new Atacante("Ramiro Carrera", "Medio", 72,11.578,29);
    plantilla[16] = new Atacante("Rafael Baca", "Medio", 69, 11.435, 33);
    plantilla[17] = new Atacante("Uriel Antuna", "Medio", 74, 15.724, 25);
    plantilla[18] = new Atacante("Carlos Rotondi", "Medio", 73,1.372,26);
    plantilla[19] = new Atacante("Ivan Morales","Delantero",66,8.719,23);
    plantilla[20] = new Atacante("Christian Tabo", "Delantero", 72, 9.219,
                                    29);
    plantilla[21] = new Atacante("Gonzalo Carneiro", "Delantero", 71,
                                    1.715, 27);
    plantilla[22] = new Atacante("Augusto Lotti", "Delantero", 70, 0.443,
                                    26);
    plantilla[23] = new Atacante("Michael Estrada", "Delantero", 69,
                                    18.583, 20);
    plantilla[24] = new Atacante("Miguel Sesena", "Delantero", 60, 
                                    0.142, 20);
    plantilla[25] = new Entrenador("Ricardo Ferretti", "Director Tecnico",
                                    82 , 76.10);
    plantilla[26] = new Entrenador("Oscar Perez Rojas",
                                    "Entrenador de porteros", 79, 22.5);
    plantilla[27] = new Entrenador("Gustavo Leombruno",
                                    "Preparador fisico", 72, 10.4);
    plantilla[28] = nullptr;
    plantilla[29] = nullptr;
    plantilla[30] = nullptr;
    plantilla[31] = nullptr;
    plantilla[32] = nullptr;
    plantilla[33] = nullptr;
    plantilla[34] = nullptr;


    
}

/**
 * Metodo imprimeDatos()
 * Este metodo nos ayudará a mostrar los datos de la plantilla actual del
 * equipo, es llamada directamente desde el menú del main y sirve entre otras
 * cosas para consultar los datos de la plantilla actual y el número de 
 * colaboradores, para que el usuario este consciente de ello para los 
 * limites, hace uso del polimorfismo al llamar a la funcion 
 * "mostrar_estadisticas", ya que cada clase tiene su propia sobreescritura de
 * esta funcion
 * 
 * @param
 * @return 
*/

void SistemaDatos::imprimeDatos() {
    cout << "Plantilla: " << endl;
    int colaboradores = 0;
    for (int i = 0; i < 34; i++) {
        if (plantilla[i] != nullptr) {
            cout << "____________________________________________"<< endl;
            plantilla[i]->mostrar_estadisticas();
            colaboradores++;
            cout << "____________________________________________"<< endl;
            }
        }
    cout << "Total de colaboradores: " << colaboradores << endl;
}

/**
 * Metodo despedir_colaborador(string nombre)
 * Este metodo se encarga de quitar de la plantilla al colaborador que el 
 * usuario ya no quiere en el equipo y reemplazar su posicion en el arreglo
 * por un apuntador nulo o nullptr, se localiza este colaborador a partir de
 * su nombre, y posterirmente a despedirlo, se recorre toda la lista, para que
 * no haya un nullptr entre la plantilla, sino hasta el final, asímismo 
 * imprime un mensaje de exito o fracaso
 * 
 * @param string: nombre
 * @return
*/
void SistemaDatos::despedir_colaborador(string nombre) {
    bool encontrado = false;

    for (int i = 0; i < 34; i++) {
        if (plantilla[i] != nullptr && plantilla[i]->getNombre()==nombre){
            plantilla[i] = nullptr;
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        for (int i = 0; i < 33; i++) {
            if (plantilla[i] == nullptr) {
                for (int j = i; j < 33; j++) {
                    plantilla[j] = plantilla[j + 1];
                    plantilla[j + 1] = nullptr;
                }
            }
        }
        cout << "El colaborador " << nombre 
                << " ha sido despedido exitosamente" << endl;
    } else {
        cout << "No se encontró al colaborador " << nombre 
                << " en la plantilla" << endl;
    }
}

/**
 * Metodo contratar_colaborador()
 * Este metodo se encarga de contratar a un colaborador que se encuentre en la
 * lista de traspasos, para ello, primero muestra todos los colaboradores
 * disponibles, y posteriormente pregunta al usuario si desea contratar a 
 * alguno de ellos, si la respuesta es afirmativa, se pide el nombre del
 * colaborador que se desea contratar, y se busca en la lista de traspasos,
 * si se encuentra, se agrega a la plantilla, y se elimina de la lista de
 * traspasos
 * 
 * @param
 * @return 
*/

void SistemaDatos::contratar_colaborador() {
    // Mostramos todos los colaboradores disponibles en la lista de traspasos
    cout << "Colaboradores disponibles: " << endl;
    for (int i = 0; i < 50; i++) {
        if (traspasos[i] != nullptr) {
            cout << "____________________________________________"<< endl;
            traspasos[i]->mostrar_estadisticas();
            cout << "____________________________________________"<< endl;
        }
    }

    string respuesta;
    cout << "¿Desea contratar algún colaborador? (si/no): ";
    cin >> respuesta;

    if (respuesta == "si") {
        string nombre;
        cout <<"Ingresa el nombre del colaborador que deseas contratar: ";
        cin.ignore();
        getline(cin, nombre);

        for (int i = 0; i < 50; i++) {
            if (traspasos[i] != nullptr && traspasos[i]->getNombre() == 
                nombre){
                for (int j = 0; j < 34; j++) {

                    if (plantilla[j] == nullptr) {
                        plantilla[j] = traspasos[i];
                        traspasos[i] = nullptr;
                        cout << "El colaborador " << nombre <<
                        " ha sido contratado exitosamente" << endl;

                        // Movemos una posición a la izquierda los elementos en la 
                        //lista de traspasos
                        for (int k = i; k < 49; k++) {
                            traspasos[k] = traspasos[k + 1];
                        }
                        traspasos[49] = nullptr;
                        break; //returns 
                    }
                }
                break;
            }
        }
    } else {
        cout << "Está bien, regresando al menú principal" << endl;
    }
}
/**
 * Metodo subir_canterano(string posicion)
 * Este metodo se encarga de subir a un canterano a la plantilla, para ello,
 * primero se verifica que la posicion sea valida, y posteriormente se busca
 * un espacio vacio en la plantilla, y se agrega al canterano y si se 
 * encuentra, se busca un nombre random en la lista de nombres randoms, y se 
 * le asigna al canterano, posteriormente se imprimenn los datos del canterano
 * 
 * @param string: posicion
 * @return
*/
void SistemaDatos::subir_canterano(string posicion) {
    if (posicion == "Portero" || posicion == "Defensa") {
        for (int i = 0; i < 34; i++) {
            if (plantilla[i] == nullptr) {
                for (int k = 0; k < 40; k++) {
                    if (nombres_random[k] != "") {
                        plantilla[i] = new Defensivo(nombres_random[k],
                        posicion, 65, 0.1, 16);
                        plantilla[i]->mostrar_estadisticas();
                        nombres_random[k] = "";
                        cout << "El canterano ha sido subido exitosamente"
                                << endl;
                        return;
                    }
                }
            }
        }
    }
    else if (posicion == "Medio" || posicion == "Delantero") {
        for (int i = 0; i < 34; i++) {
            if (plantilla[i] == nullptr) {
                for (int k = 0; k < 40; k++) {
                    if (nombres_random[k] != "") {
                        plantilla[i] = new Atacante(nombres_random[k],
                        posicion, 65, 0.1, 16);
                        nombres_random[k] = "";
                        cout << "El canterano ha sido subido exitosamente"
                                << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "No se pudo subir al canterano" << endl;
}
/**
 * Metodo buscar_colaborador(string nombre)
 * Este metodo se encarga de buscar a un colaborador en la plantilla, para
 * ello, se recorre la plantilla, y si se encuentra, se imprimen sus datos
 * 
 * @param string: nombre
 * @return
*/
void SistemaDatos::buscar_colaborador(string nombre) {
    for (int i = 0; i < 30; i++) {
        if (plantilla[i]->getNombre() == nombre) {
            plantilla[i]->mostrar_estadisticas();
        }
    }
}
/**
 * Metodo restar_sueldos()
 * Este metodo se encarga de restar los sueldos de los colaboradores de la 
 * plantilla a la variable presupuesto
 * 
 * @param
 * @return
*/
void SistemaDatos::restar_sueldos(){
    for (int i = 0; i < 34; i++) {
        if (plantilla[i] != nullptr) {
            presupuesto -= plantilla[i]->getSueldo();
        }
    }
}
/**
 * Metodo pasar_temporado()
 * Este metodo se encarga de pasar la temporada, para ello, se recorre la
 * plantilla, y si el colaborador es un jugador, se le aumenta la edad y se
 * le cambia el nivel, y si es un entrenador, se le cambia el nivel, y si
 * tiene más de 38 años, se despide al jugador. Posteriormente, verificamos
 * si el usuario cumple los requisitos establecidos enn el README, y si los
 * cumple, se le muestra un mensaje de exito, y si no, se le muestra un
 * mensaje de fracaso y se le despide, regresa un parametro que indica si
 * el usuario cumplio los requisitos o no, o si gno la liga
 * 
 * @param
 * @return int
*/
int SistemaDatos::pasar_temporada() {
    int parametro = 1;
    for (int i = 0; i < 34; i++) {
        if (plantilla[i] != nullptr) {
            if (plantilla[i]->getTipo() == "Portero" || 
                plantilla[i]->getTipo() == "Defensa" || 
                plantilla[i]->getTipo() == "Medio" || 
                plantilla[i]->getTipo() == "Delantero") {
                Jugador* jugador = dynamic_cast<Jugador*>(plantilla[i]);
                if (jugador != nullptr) {
                    jugador->setEdad();
                    jugador->setNivel();
                    
                    if (jugador->getEdad() >= 38) {
                        despedir_colaborador(plantilla[i]->getNombre());
                    }
                }
            }
            else {
                Entrenador* entrenador =
                dynamic_cast<Entrenador*>(plantilla[i]);
                if (entrenador != nullptr) {
                    entrenador->setNivel();
                }
            }
            plantilla[i]->setSueldo(plantilla[i]->getSueldo());
        }
    }
    cout << "Verificando si el equipo cumple los requisitos..." << endl;
    int porteros = 0;
    int defensas = 0;
    int medios = 0;
    int delanteros = 0;
    int entrenadores = 0;
    for (int i = 0; i < 34; i++) {
        if (plantilla[i] != nullptr) {
            if (plantilla[i]->getTipo() == "Portero") {
                porteros++;
            }
            else if (plantilla[i]->getTipo() == "Defensa") {
                defensas++;
            }
            else if (plantilla[i]->getTipo() == "Medio") {
                medios++;
            }
            else if (plantilla[i]->getTipo() == "Delantero") {
                delanteros++;
            }
            else {
                entrenadores++;
            }
        }
    }
    if (porteros < 1 || defensas < 4 || medios < 4 || delanteros < 3 ||
        entrenadores < 1) {
        cout << "No se cumplen los requisitos para pasar a la siguiente "
                << "temporada" << endl;
        cout << "Queda oficialmente despedido como presidente del Cruz"
                << " Azul FC, inténtalo de nuevo" << endl;
        parametro = 0;
    }
    getNivelEquipo();
    cout << "El nivel del equipo es: " << getNivelEquipo() << endl;
    int resultaditos = getResultados();
    cout << "El resultado de la temporada pasada fue: " 
            << resultaditos << endl;
    setResultados();
    int resultados_nuevos = getResultados();
    cout << "El resultado de la temporada actual es: " << resultados 
            << endl;
    setPresupuesto(resultados_nuevos);
    restar_sueldos();
    int contador = 0;
    for (int i = 0; i < 34; i++) {
        if (plantilla[i] != nullptr) {
            contador++;
        }
    }
    if (contador < 20 || contador > 30) {
        cout << "Se salió de los límites previamente establecidos" 
                << endl;
        cout << "Queda oficialmente despedido como presidente del Cruz  "
                << "Azul FC, inténtalo de nuevo" << endl;
        parametro = 0;
    }
    if (resultados_nuevos > resultaditos) {
        cout << "Quedó en una posición inferior en la tabla con respecto "
                << "a la temporada pasada" << endl;
        cout << "En la temporada pasada quedó en el lugar "<< resultaditos
                << " y en esta temporada quedó en el lugar " << resultados 
                << endl;
        cout << "Queda oficialmente despedido como presidente del Cruz  "
                << "Azul FC, inténtalo de nuevo" << endl;
        parametro = 0;
    }
    if (presupuesto <= 0) {
        cout << "Se quedó sin presupuesto" << endl;
        cout << "Queda oficialmente despedido como presidente del Cruz  "
                << "Azul FC, inténtalo de nuevo" << endl;
        parametro = 0;
    }
    if (resultados == 1) {
        cout << "¡Felicidades! Has ganado la liga" << endl;
        cout << "Llevaste al Cruz Azul a su décima gloria" << endl;
        cout << "Has cumplido el objetivo exitosamente, gracias por tu" << 
        "esfuerzo" << endl;
        parametro = 2;
    }
    return parametro;
}
/**
 * Constructor por default
 * Este constructor se encarga de crear la plantilla actual, de establecer
 * los traspasos y de establecer los nombres random
 * 
 * @param
 * @return
*/
SistemaDatos::SistemaDatos(){
    crea_plantilla_actual();
    setTraspasos();
    setNombresRandom();
    resultados = 18;
    presupuesto = 0;
}
/**
 * Constructor con parametros
 * Recibe resultados y nivel de equipo y establece el presupuesto, crea la
 * plantilla actual, establece los traspasos y establece los nombres random
 * 
 * @param int _resultados
 * @param double _nivel_equipo
 * @return
*/
SistemaDatos::SistemaDatos(int _resultados, 
                double _nivel_equipo){
    setPresupuesto(_resultados);
    crea_plantilla_actual();
    setTraspasos();
    setNombresRandom();
}

#endif