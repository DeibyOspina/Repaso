
#include <iostream>
using namespace std;

int main()
{
    int xo = 0;
    int vel = 0;
    int vel2 = 0;
    int dit = 0;
    int tiempo = 0; 
    
    cout << "Ingrese la distancia entre ambas ciudades: " ;
    cin >> dit; 
    cout << "Ingrese la velocidad del auto: ";
    cin >> vel ;
    cout << "Ingrese la velocidad del auto 2: ";
    cin >> vel2;
    
    tiempo = ((dit - xo)/(vel));
    
    cout << "El tiempo que tardan en encontarse ambos vehiculos es de: " << tiempo << "horas";

    return 0;
}
 