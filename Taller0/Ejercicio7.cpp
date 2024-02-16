
#include <iostream>
using namespace std;


int main()
{
int suma=0;
int a=1;

while(a<101 && a>0){
    
    suma+= a;
    
    a++;
}

cout<<"La suma de todos los enteros entre 1 y 100 es de: "<<suma;


    return 0;
}
