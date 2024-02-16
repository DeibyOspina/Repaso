#include <iostream>
using namespace std;

int
main ()
{

 float deuda;
  float descuento = 0.0;

  cout << "Ingrese el valor de la deuda" << endl;
  cin >> deuda;

  if (deuda > 60000 && deuda < 150000)
	{
	  descuento = 0.2;
	}
  else if (deuda > 150000 && deuda < 300000)
	{
	  descuento = 0.3;
	}
  else if (deuda > 300000 && deuda <= 800000)
	{
	  descuento = 0.4;
	}
  else if (deuda > 800000)
	{
	  descuento = 0.5;
	}

  deuda = deuda - (deuda * descuento);
  descuento = descuento * 100;
  cout << "Descuento: " << descuento << "%" << endl;
  cout << "Valor a pagar con descuento $" << deuda << endl;
}