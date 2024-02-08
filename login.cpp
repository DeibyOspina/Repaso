#include <iostream>
using namespace std;
int main(){

    string user;
    string password;
    string usg = "user";
    string pg = "12345";

    cout << "Ingrese el usuario: " << endl;
    cin >> user;

    if (user == usg){

        cout << "El usuario es correcto, por favor ingrese su contraseña." << endl;
    }else{
        cout << "El usuario ingresado no es correcto" << endl;
        return 0;
    }
    cout << "Ingrese su contraseña: " << endl;
    cin >> password;

    if (password == pg){

        cout << "La contraseña es correcta, usted ha ingresado con exito" << endl;
    }else{

        cout << "La contraseña es incorrecta." << endl;
    }

    return 0;
}