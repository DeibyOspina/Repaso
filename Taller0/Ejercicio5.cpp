#include <iostream>
using namespace std;

int
main ()
{
  int salarioEmpleado =40000;
  int horas;
  
  cout << "Ingrese las horas trabajas" << endl;
  cin >> horas;
  
  if(horas > 35){
    horas = horas - 35;
      for(int i = 0;i< horas;i++){
          salarioEmpleado += 5000;
      }
  }else{
      salarioEmpleado = horas * 40000; 
  }
  
  cout << "El salrio es de: $" << salarioEmpleado;
  return 0;
}