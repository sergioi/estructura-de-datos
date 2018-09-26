#include <iostream>
#include <fstream>
#include "listado.h"
#include <string.h>
#include <cstdlib>
using namespace std;


int main()
{
    bool z=true;

    listado d;
    int decision;
    cout << "UNIDAD 1.\n-<<<Estructura de Datos>>>." << endl
    <<"============================"<<endl;

    do {

    cout << " 1-para ordenar los nombres,\n 2-para verificar si se encuentra un nombre \n 3-para salir\n";
    cin >>decision;
    system("cls");
switch
(decision)
{
  case 1:
       d.orden();

  break;
  case 2:

    d.buscar();

    break;
  case 3:
      z=false;
      system("exit");
    break;


}
}while (z);

    return 0;
}
