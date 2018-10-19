
#include <iostream>
#include "cambio.h"
using namespace std;

int main()
{
    float pago,deuda,vuelto;
   cout<<"ingresa el monto a pagado:"<<endl;
   cin>>pago;
   cout<<"ingresa el costo de la compra"<<endl;
   cin>>deuda;
   vuelto=pago-deuda;

   cambio as;
   as.monedas(vuelto);

    return 0;
}
