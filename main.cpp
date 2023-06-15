/**
 * Proyecto Integrador - TC1030
 * Proyecto presidente Cruz Azul FC
 * Diego Quezada Colorado A01710024
 * 08/06/2023   
 */

/**
 * Este programa simula la administracion de un equipo de futbol, 
 * específicamente el Cruz Azul FC, te permite contratar y despedir
 * colaboradores, consultar el presupuesto, mostrar estadisticas de los
 * colaboradores, subir canteranos y simular una temporada.
 * El objetivo es que el usuario logre administrar el equipo de la mejor
 * manera posible, para que el equipo logre ganar la liga.
*/


//Bibliotecas
#include <iostream> //para imprimir
#include <string> //para usar strings
#include "SistemaDatos.h" //clase encargada de administrar los datos
#include "Colaborador.h" //clase abstracta, padre de todas las demas
#include "Atacante.h" //clase hija de jugador
#include "Entrenador.h" //clase hija de colaborador
#include "Jugador.h" //clase hija de colaborador
#include "Defensivo.h" //clase hija de jugador

using namespace std;
int main() {
//Creamos un objeto de la clase SistemaDatos, llamando al constructor por default
    SistemaDatos sistemita = SistemaDatos();
    
    int opcion = 0;
    cout << "Te damos la bienvenida como nuevo presidente del Cruz Azul F.C" << endl;
    cout << "A continuacion te presentamos el menu de opciones" << endl;
    //Ciclo para que corra hasta que el usuario elija la opcion de salir
    while (opcion != 8) {
        cout << "----------------------------------------------" << endl;
        cout << "Bienvenido a la nueva temporada, te deseamos el mayor de los exitos." << endl;
        //Imprime las opciones que va a tener nuestro sistema
        cout << "1. Mostrar datos de la plantilla actual" << endl;
        cout << "2. Consultar presupuesto" << endl;
        cout << "3. Contratar un nuevo colaborador" << endl;
        cout << "4. Despedir un colaborador" << endl;
        cout << "5. Mostrar estadisticas de un colaborador" << endl;
        cout << "6. Subir un canterano" << endl;
        cout << "7. Simular temporada y mostrar resultados" << endl;
        cout << "8. Salir" << endl;
        cout << "Ingresa el numero de la opcion que deseas realizar: ";
        cin >> opcion;
        
        if (opcion == 1) {
        //Muestra los datos de la plantilla, con los cambios actualizados
            sistemita.imprimeDatos();
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); 
            cin.get(); 
        } else if (opcion ==2){
        //Muestra el presupuesto actualizado del equipo
            cout << "El presupuesto actual es de: " << sistemita.getPresupuesto(sistemita.getResultados()) <<" millones de MXN"<< endl;
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); 
            cin.get(); 
        } else if (opcion == 3) {
        //Muestra las opciones y ofrece la opcion de contratar colaborador
            cout << "Ingresando al sistema de traspasos.. " << endl;
            sistemita.contratar_colaborador();
            cout << "Presione ENTER para regresar al menú principal...";
            cin.get(); 

        }  else if (opcion == 4) {
        //Solicita el nombre de un colaborador de la plantilla para despedirlo
            string nombre;
            cout << "Ingresa el nombre del colaborador que deseas despedir: ";
            cin.ignore();
            getline(cin, nombre);
            sistemita.despedir_colaborador(nombre);
            cout << "Presione ENTER para regresar al menú principal...";
            cin.get(); 
        } else if (opcion == 5) {
        //Solicita el nombre de un colaborador de la plantilla que el usuario
        //desee ver sus estadísticas
            string nombre;
            cout << "Ingresa el nombre del colaborador que deseas ver sus estadisticas: ";
            cin.ignore();
            getline(cin, nombre);
            sistemita.buscar_colaborador(nombre);
            cout << "Presione ENTER para regresar al menu principal...";
            cin.get(); 
        } else if (opcion == 6) {
        //Solicita al usuario la posicion de la que le interesaria tener un
        //nuevo canterano
            cout << "Ingrese la opción que tenga la posicion de la que le interesa tener un nuevo canterano: " << endl;
            cout << "1. Portero" << endl;
            cout << "2. Defensa" << endl;
            cout << "3. Medio" << endl;
            cout << "4. Delantero" << endl;
            int pos;
            cin >> pos;
            if (pos == 1) {
                sistemita.subir_canterano("Portero");
            } else if (pos == 2) {
                sistemita.subir_canterano("Defensa");
            } else if (pos == 3) {
                sistemita.subir_canterano("Medio");
            } else if (pos == 4) {
                sistemita.subir_canterano("Delantero");
            } else {
                cout << "Opcion invalida, intentelo de nuevo" << endl;
            }
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); 
            cin.get(); 
        } else if (opcion == 7) {
        //evalua la temporada, respecto al nivel de colaboradores que hay en
        //la plantilla, y otros factores expuestos en el README, y muestra
        //los resultados obtenidos
            int numerito;
            numerito = sistemita.pasar_temporada();
            if (numerito == 0){
                cout << "Hasta la próxima, intentelo nuevamente" << endl;
                opcion = 8;
            } else if (numerito == 1){
                cout << "Ha cumplido los requisitos" << endl;
                cout << "La directiva ha decidido contar con sus servicios una temporada mas :) " << endl;
                cout << "Presione ENTER para regresar al menu principal...";
                cin.ignore(); 
                cin.get(); 
            } else if (numerito == 2){
                cout << "Gracias por todo";
                cout << "Presione ENTER para terminar el programa.";
                cin.ignore(); 
                cin.get(); 
                opcion = 8;
            }
            
            
        } else if (opcion == 8) {
        //Agradece al usuario por usar el programa y termina el programa
            cout << "Gracias por usar el programa" << endl;
        } else {
            cout << "Opcion invalida, intentelo de nuevo" << endl;
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); 
            cin.get(); 
            }
    }
    
    return 0;
}

