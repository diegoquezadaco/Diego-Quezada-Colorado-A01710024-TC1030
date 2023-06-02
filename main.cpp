#include <iostream>
#include <string>
using namespace std;
#include "SistemaDatos.h"
#include "Colaborador.h"
#include "Atacante.h"
#include "Entrenador.h"
#include "Jugador.h"
#include "Defensivo.h"
//No hice el main, pero si se puede compilar y deberia funcionar si pruebas las funciones 
int main(){
    system("cls");
    //Creamos un sistema de datos con el constructor de SistemaDatos por defaul para probar nuestras funciones
    SistemaDatos sistemita;
    //Comenzamos a definir nuestro menu
    int opcion = 0;
    //Damos la bienvenida al usuario
    cout << "Te damos la bienvenida como nuevo presidente del Cruz Azul F.C" << endl;
    cout << "A continuacion te presentamos el menu de opciones" << endl;
    //Creamos un ciclo para que el usuario pueda elegir varias opciones
    while (opcion != 6){
        cout << "1. Mostrar datos de la plantilla actual (Unica opcion que funciona)" << endl;
        cout << "2. Contratar un nuevo colaborador" << endl;
        cout << "3. Despedir un colaborador" << endl;
        cout << "4. Mostrar estadisticas de un colaborador" << endl;
        cout << "5. Subir un canterano" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingresa el numero de la opcion que deseas realizar: ";
        cin >> opcion;
        //Creamos un switch para que el usuario pueda elegir la opcion que desea
        switch (opcion){
            case 1:
                //Imprimimos los datos de la plantilla
                //Probamos la funcion de imprimir datos, donde hacemos uso de polimorfismo al definir la plantilla como un arreglo de Colaboradores
                sistemita.imprimeDatos();
                break;
            case 2:
                
            case 3:
                
            case 4:
                
            case 5:
                
            case 6:
                //Salimos del programa
                cout << "Gracias por usar el programa" << endl;
                break;
            default:
                //Si el usuario ingresa una opcion invalida, le avisamos
                cout << "Opcion invalida" << endl;
                break;
        }

        
    }
    return 0;

}