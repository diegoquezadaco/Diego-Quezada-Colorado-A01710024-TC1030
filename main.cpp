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
    system("cls");
    SistemaDatos sistemita = SistemaDatos();
    
    int opcion = 0;
    cout << "Te damos la bienvenida como nuevo presidente del Cruz Azul F.C" << endl;
    cout << "A continuacion te presentamos el menu de opciones" << endl;
    
    while (opcion != 6) {
        cout << "1. Mostrar datos de la plantilla actual (Unica opcion que funciona)" << endl;
        cout << "2. Contratar un nuevo colaborador" << endl;
        cout << "3. Despedir un colaborador" << endl;
        cout << "4. Mostrar estadisticas de un colaborador" << endl;
        cout << "5. Subir un canterano" << endl;
        cout << "6. Simular temporada y mostrar resultados" << endl;
        cout << "9. Salir" << endl;
        cout << "Ingresa el numero de la opcion que deseas realizar: ";
        cin >> opcion;
        
        if (opcion == 1) {
            sistemita.imprimeDatos();
        } else if (opcion == 2) {
            cout << "Estos son los colaboradores disponibles: " << endl;
            for (int i = 0; i < 50; i++) {
                cout << i + 1 << ". " << sistemita.getTraspasos()[i].getNombre() << endl;
            }
            string nombre;
            cout << "Ingresa el nombre del colaborador que deseas contratar: ";
            cin >> nombre;
            sistemita.contratar_colaborador(nombre);
        } else if (opcion == 3) {
            // Lógica para despedir un colaborador
        } else if (opcion == 4) {
            // Lógica para mostrar estadísticas de un colaborador
        } else if (opcion == 5) {
            sistemita.subir_canterano("Portero");
        } else if (opcion == 9) {
            cout << "Gracias por usar el programa" << endl;
        } else {
            cout << "Opcion invalida" << endl;
        }
    }
    
    return 0;
}

