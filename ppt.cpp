#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int opcionUsuario;
    int opcionMaquina;

    cout << "Bienvenido al juego de Piedra, Papel o Tijeras!" << endl;
    cout << "1. Piedra\n2. Papel\n3. Tijeras" << endl;
    cout << "Elige tu opción (1-3): ";
    cin >> opcionUsuario;

    opcionMaquina = rand() % 3 + 1; 

    cout << "La máquina eligió: ";
    switch (opcionMaquina) {
        case 1:
            cout << "Piedra";
            break;
        case 2:
            cout << "Papel";
            break;
        case 3:
            cout << "Tijeras";
            break;
    }
    cout << endl;

    cout << "Tú elegiste: ";
    switch (opcionUsuario) {
        case 1:
            cout << "Piedra";
            break;
        case 2:
            cout << "Papel";
            break;
        case 3:
            cout << "Tijeras";
            break;
        default:
            cout << "Opción inválida";
            return 1;
    }
    cout << endl;

    if (opcionUsuario == opcionMaquina) {
        cout << "¡Es un empate!" << endl;
    } else if ((opcionUsuario == 1 && opcionMaquina == 3) ||
               (opcionUsuario == 2 && opcionMaquina == 1) ||
               (opcionUsuario == 3 && opcionMaquina == 2)) {
        cout << "¡Ganaste :D!" << endl;
    } else {
        cout << "Perdiste :c" << endl;
    }

    return 0;
}