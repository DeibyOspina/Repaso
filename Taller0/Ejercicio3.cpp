#include <iostream>
using namespace std;

int main()
{
    int tpn;
    int valplan = 0;
    float d = 0; 
    float des = 0; 

    cout << "Ingrese el tipo de plan (1 para prepago, 2 para postpago): ";
    cin >> tpn;
    cout << "Ingrese el valor de su plan: ";
    cin >> valplan;

    switch (tpn)
    {
    case 1:
        if (valplan >= 100000 && valplan <= 900000) 
            d = 0.10;
            valplan = valplan * (1 - d); 
        }
        else if (valplan > 1000000) 
        {
            d = 0.20;
            valplan = valplan * (1 - d); 
        }
        break; 

    case 2:
        if (valplan < 500000)
        {
            d = 0.15;
            valplan = valplan * (1 - d);
        }
        else if (valplan >= 500000 && valplan <= 1000000) 
        {
            d = 0.20;
            valplan = valplan * (1 - d); 
        }
        else if (valplan > 1000000)
        {
            d = 0.25;
            valplan = valplan * (1 - d); 
        }
        break; 
    }

    des = d * 100;

    cout << "A su plan se le aplica un descuento del " << des << "%." << endl;
    cout << "El valor total de su plan es: " << valplan << endl;

    return 0;
}  