#include <iostream>
#include <string>
#include "SistemaDatos.h"
#include "Colaborador.h"
#include "Atacante.h"
#include "Entrenador.h"
#include "Jugador.h"
#include "Defensivo.h"

using namespace std;

int main() {
    SistemaDatos sistemita = SistemaDatos();
    
    int opcion = 0;
    cout << "Te damos la bienvenida como nuevo presidente del Cruz Azul F.C" << endl;
    cout << "A continuacion te presentamos el menu de opciones" << endl;
    
    while (opcion != 8) {
        cout << "1. Mostrar datos de la plantilla actual (Unica opcion que funciona)" << endl;
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
            cout << "El presupuesto actual es de: " << sistemita.getPresupuesto() <<" millones de MXN"<< endl;
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
            cin.get(); // Esperar a que se presione ENTER para continuar
        }else if (opcion == 3) {
            cout << "Ingresando al sistema de traspasos.. " << endl;
            sistemita.contratar_colaborador();          
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
            cin.get(); // Esperar a que se presione ENTER para continuar
        } else if (opcion == 4) {
            string nombre;
            cout << "Ingresa el nombre del colaborador que deseas despedir: ";
            cin >> nombre;
            sistemita.despedir_colaborador(nombre);
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
            cin.get(); // Esperar a que se presione ENTER para continuar
            cout << "Presione ENTER para regresar al menu principal...";
            cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
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
            sistemita.pasar_temporada();
            if (sistemita.pasar_temporada() == 0){
                cout << "Hasta la próxima, intentelo nuevamente" << endl;
                opcion = 8;
            } else if (sistemita.pasar_temporada() == 1){
                cout << "Presione ENTER para regresar al menu principal...";
                cin.ignore(); // Ignorar el ENTER presionado después de introducir la opción
                cin.get(); // Esperar a que se presione ENTER para continuar
            } else if (sistemita.pasar_temporada() == 2){
                cout << "Presione ENTER para regresar al menu principal...";
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

