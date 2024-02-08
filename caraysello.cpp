#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para números aleatorios

    int resultado = rand() % 2; // 0 para cara, 1 para sello

    if (resultado == 0) {
        cout << "¡Es cara!" << endl;
    } else {
        cout << "¡Es sello!" << endl;
    }

    return 0;
}