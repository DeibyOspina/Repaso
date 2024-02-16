
#include <iostream>
using namespace std;

int main()
{
    float salario;
    float salarioFinal;
    float aumentoSalario = 1.15;
    
cout<<"Ingrese su salario: "<<endl;
cin>>salario;

if (salario >= 1000000){
cout<<"Su salario no aplica para el aumento de navidad, comuniquese a recursos humanos.";
}
else if(salario < 1000000){
cout<<"Su salario aplica para el aumento de Navidad."<<endl;
salarioFinal=salario*aumentoSalario;
cout<<"Su salario con el aumento navideño es de: "<<salarioFinal<<endl;
}

    
    
    
    return 0;
}
