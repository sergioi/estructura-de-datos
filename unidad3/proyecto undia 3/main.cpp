#include <iostream>
#include "pilas.h"
#include <conio.h>
#include <cstdlib>
using namespace std;

int main()
{   pilas pas;
    Nodo1 *pila1 =NULL;
    Nodo2 *pila2 =NULL;
    Nodo3 *pila3 =NULL;
    Nodo4 *pila4 =NULL;
    Nodo5 *pila5 =NULL;
    int datoi;
    int datoj;
    do {
            system("cls");
            cout<<"-INGRESA 0 EN EL MOMENTO QUE DESES TERMINAR LAS ENTRADAS"<<endl;
            cout<<"-INGRESA NUMEROS NEGATIVOS PARA ELIMINAR UN VALOR DE LA PILA"<<endl;
            cout<<"-HAY 5 PILAS LOS VALORES NO DEBEN SUPERAR EL 5 NI SER MENORES A -5"<<endl<<endl;
    cout<<"Ingresa el numero de pila N (i)"<<endl;
    cin>>datoi;

    if(datoi==0)
        break;

    if (datoi>0 && datoi<6)
{
    cout<<"ingresa valor a almacenar en la pila "<<datoi<<" (j)"<<endl;
    cin>>datoj;
}
    switch (datoi)
    { case -5:
        {
            cout<<"se elimino un valor el la PILA 5"<<endl;
            pas.sacarPila5(pila5,datoi,datoj);
            system("pause");

        }
    break;
    case -4:
        {
            cout<<"se elimino un valor el la PILA 4"<<endl;
            pas.sacarPila4(pila4,datoi,datoj);
            system("pause");

        }
    break;
    case -3:
        {
            cout<<"se elimino un valor el la PILA 3"<<endl;
            pas.sacarPila3(pila3,datoi,datoj);
            system("pause");

        }
    break;
    case -2:
        {
            cout<<"se elimino un valor el la PILA 2"<<endl;
            pas.sacarPila2(pila2,datoi,datoj);
            system("pause");
        }
        break;
    case -1:
        {
            cout<<"se elimino un valor el la PILA 1"<<endl;
            pas.sacarPila1(pila1,datoi,datoj);
            system("pause");
        }
        break;
    case 1:
        {
            pas.agregarPila1(pila1,datoi,datoj);
        }
        break;
    case 2:
        {
            pas.agregarPila2(pila2,datoi,datoj);
        }
        break;
    case 3:
        {
            pas.agregarPila3(pila3,datoi,datoj);
        }
        break;
    case 4:
        {
            pas.agregarPila4(pila4,datoi,datoj);
        }
        break;
    case 5:
        {
            pas.agregarPila5(pila5,datoi,datoj);
        }
        break;
    default: cout<< "valor no valido"<<endl;
    system("pause");
    }




}
while (datoi!=0 );//fin de ciclo de llenado

system("cls");
cout<<"IMPRECION DE PILAS"<<endl;
cout<<"PILA 1:"<<endl;
if (pila1==NULL)
{
    cout<<"VACIA!!"<<endl<<endl;
}
    while(pila1 != NULL)//impresion de pila 1
    {
        pas.sacarPila1(pila1,datoi,datoj);
        if(pila1 != NULL){
            cout<<datoi<<"-"<<datoj<<endl;
        }
        else{
            cout<<datoi<<"-"<<datoj<<endl<<endl;
        }
    }
cout<<"PILA 2:"<<endl<<endl;
if (pila2==NULL)
{
    cout<<"VACIA!!"<<endl<<endl;
}

   while(pila2 != NULL)//inprecion de pila 2
    {
        pas.sacarPila2(pila2,datoi,datoj);
        if(pila2 != NULL){
            cout<<datoi<<"-"<<datoj<<endl;
        }
        else{
            cout<<datoi<<"-"<<datoj<<endl<<endl;
        }
    }
cout<<"PILA 3:"<<endl<<endl;
if (pila3==NULL)
{
    cout<<"VACIA!!"<<endl<<endl;
}

   while(pila3 != NULL)//inprecion de pila 3
    {
        pas.sacarPila3(pila3,datoi,datoj);
        if(pila3 != NULL){
            cout<<datoi<<"-"<<datoj<<endl;
        }
        else{
            cout<<datoi<<"-"<<datoj<<endl<<endl;
        }
    }
cout<<"PILA 4:"<<endl<<endl;
if (pila4==NULL)
{
    cout<<"VACIA!!"<<endl<<endl;
}

   while(pila4 != NULL)//inprecion de pila 4
    {
        pas.sacarPila4(pila4,datoi,datoj);
        if(pila4 != NULL){
            cout<<datoi<<"-"<<datoj<<endl;
        }
        else{
            cout<<datoi<<"-"<<datoj<<endl<<endl;
        }
    }
cout<<"PILA 5:"<<endl<<endl;
if (pila5==NULL)
{
    cout<<"VACIA!!"<<endl;
}

   while(pila5 != NULL)//inprecion de pila 5
    {

        pas.sacarPila5(pila5,datoi,datoj);
        if(pila5 != NULL){
            cout<<datoi<<"-"<<datoj<<endl;
        }
        else{
            cout<<datoi<<"-"<<datoj<<endl<<endl;
        }
    }
    return 0;
}
