#include <iostream>

using namespace std;

int main() {
    int gradosf;
    int gradosc;

    cout << "Abuelita, introduce la cantidad de temperatura que indica en la receta: ";
    cin >> gradosf;

    gradosc = ((gradosf - 32) * 5) / 9;

    cout << "Abuelita, la cantidad de temperatura que necesita el horno es: " << gradosc << " grados Celsius." << endl;

    return 0;
}