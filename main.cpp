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
    SistemaDatos sistemita = SistemaDatos();
    
    int opcion = 0;
    cout << "Te damos la bienvenida como nuevo presidente del Cruz Azul F.C" << endl;
    cout << "A continuacion te presentamos el menu de opciones" << endl;
    
    while (opcion != 8) {
        cout << "----------------------------------------------" << endl;
        cout << "Bienvenido a la nueva temporada, te deseamos el mayor de los exitos." << endl;
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
            sistemita.imprimeDatos();
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
            cin.get(); // Esperar a que se presione ENTER para continuar
        } else if (opcion ==2){
            cout << "El presupuesto actual es de: " << sistemita.getPresupuesto(sistemita.getResultados()) <<" millones de MXN"<< endl;
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
            cin.get(); // Esperar a que se presione ENTER para continuar
        } else if (opcion == 3) {
            cout << "Ingresando al sistema de traspasos.. " << endl;
            cout << "0" << endl;
            sistemita.contratar_colaborador();
            cout << "Presione ENTER para regresar al menú principal...";
            cin.ignore(); // Ignorar cualquier caracter pendiente en el búfer de entrada
            cin.get(); // Esperar a que se presione ENTER para continuar

        }  else if (opcion == 4) {
            string nombre;
            cout << "Ingresa el nombre del colaborador que deseas despedir: (favor de poner un espacio antes de poner el nombre)";
            cin.ignore(); // Ignorar cualquier caracter pendiente en el búfer de entrada
            getline(cin, nombre); // Leer el nombre del colaborador
            sistemita.despedir_colaborador(nombre);
            cout << "Presione ENTER para regresar al menú principal...";
            //cin.ignore(); // Ignorar cualquier caracter pendiente en el búfer de entrada
            cin.get(); // Esperar a que se presione ENTER para continuar
        } else if (opcion == 5) {
            string nombre;
            cout << "Ingresa el nombre del colaborador que deseas ver sus estadisticas: ";
            cin >> nombre;
            sistemita.buscar_colaborador(nombre);
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
            cin.get(); // Esperar a que se presione ENTER para continuar
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
            cin.get(); // Esperar a que se presione ENTER para continuar
        } else if (opcion == 6) {
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
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
            cin.get(); // Esperar a que se presione ENTER para continuar
        } else if (opcion == 7) {
            int numerito;
            numerito = sistemita.pasar_temporada();
            if (numerito == 0){
                cout << "Hasta la próxima, intentelo nuevamente" << endl;
                opcion = 8;
            } else if (numerito == 1){
                cout << "Ha cumplido los requisitos" << endl;
                cout << "La directiva ha decidido contar con sus servicios una temporada mas :) " << endl;
                cout << "Presione ENTER para regresar al menu principal...";
                cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
                cin.get(); // Esperar a que se presione ENTER para continuar
            } else if (numerito == 2){
                cout << "Gracias por todo";
                cout << "Presione ENTER para terminar el programa.";
                cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
                cin.get(); // Esperar a que se presione ENTER para continuar
                opcion = 8;
            }
            
            
        } else if (opcion == 8) {
            cout << "Gracias por usar el programa" << endl;
        } else {
            cout << "Opcion invalida, intentelo de nuevo" << endl;
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
            cin.get(); // Esperar a que se presione ENTER para continuar
            }
    }
    
    return 0;
}

