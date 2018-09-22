#ifndef DATOS_H
#define DATOS_H
#include <istream>
#include <string.h>
#include <string>
#include <iostream>
#include <conio.h> 2
using namespace std;
class DATOS
{
    public:
        DATOS(){}
     char  nom [20][20];
     string nom2[20];
     char  aux[20];
     string bus;
     int comp;
     int comp2;
     int i,j;
     bool r=true;

    void orden(){

            ifstream lista("Nombres.txt");

            for (i=0;i<20;i++)
            {
             lista>>nom[i];
            }
                for (i=0;i<20;++i)
                {
                 for ( j=0;j<20;++j)
                 {
                    comp=strcmp(nom[j],nom[j+1]);
                            if (comp>0)
                            {
                                strcpy(aux,nom[j]);
                                strcpy(nom[j],nom[j+1]);
                                strcpy(nom[j+1],aux);
                            }
                 }
                }

                    for (  i=0;i<20;++i)

                    {cout <<nom[i]<<endl;}


         }
void buscar(){

ifstream lista("Nombres.txt");
cout<<lista;
    for (i=0;i<20;i++)
        {
             lista>>nom2[i];
        }
          cout <<"introduce el nombre que desea buscar iniciando con mayusculas \n";
          cin>>bus;

      for (i=0;i<20;i++)
        {
        if (bus==nom2[i])
           {
           cout<< "Si se encontro el nombre:"<<bus<<" en la fila :"<<i<<endl;
           r=false;

           }
        }
     if (r){
        cout << "El nombre :"<<bus<<" no exite en el listado!!!!"<<endl;
     }
}


protected:
private:
};

#endif // DATOS_H
