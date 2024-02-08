
#include <iostream> 

using namespace std;

int main() { 

    int edad;
    int peso;
    float dosis;

    cout << "Introduzca la edad del bebé en meses: " << endl; 
    cin >> edad; 

    if (edad < 12) {
        cout << "Introduzca el peso del bebé en kilogramos: " << endl; 
        cin >> peso; 

        dosis = ((peso + 10) / (static_cast<float>(edad) * 10) * 8);

        std::cout << "Cantidad de dosis a dar al bebé: " << dosis << endl;
        }else{
        cout << "Su hijo no es apto para la vacuna" << endl;
        }

    return 0;
}
