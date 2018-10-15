#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
void binario (int n); //delcaracion de la funcio;
int main()
{
    int decimal;
    char r;
    bool res=true;
   do{
        system("cls");
   do {
        cout<<"digite el numero entero:"<<endl;
        cin>>decimal;
    }while (decimal<0);
    binario(decimal); //pasando decimal a la funcion recursiva

    cout<<"\notro claculo? (s)  o  (n):"<<endl;
    cin>>r;
    if (r=='s') res=true; //condicion de miestras
    else {
    res=false;}
   }while(res==true);

    return 0;
}
void binario(int n)
{
    if (n>1) binario(n/2); //metodo recursivo en funcion
        cout<<n%2;
}
