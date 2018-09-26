#ifndef LISTADO_H
#define LISTADO_H
#include <istream>
#include <string>
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;
class listado
{
    public:
        listado();
        char  matr1 [20][20];
     string nom2[20];
     char  aux[20];
     string bu;
     int ordenador;
     int comp2;
     int i,j;
     bool r=true;

    void orden(){

            ifstream lista("Nombres.txt");

            for (i=0;i<20;i++)
            {
             lista>>matr1[i];
            }
                for (i=0;i<20;++i)
                {
                 for ( j=0;j<20;++j)
                 {
                    ordenador=strcmp(matr1[j],matr1[j+1]);
                            if (ordenador>0)
                            {
                                strcpy(aux,matr1[j]);
                                strcpy(matr1[j],matr1[j+1]);
                                strcpy(matr1[j+1],aux);
                            }
                 }
                }

                    for (  i=0;i<20;++i)

                    {cout <<matr1[i]<<endl;}

cout<<endl<<endl;
         }
void buscar(){

ifstream lista("Nombres.txt");
    for (i=0;i<20;i++)
        {
             lista>>nom2[i];
        }
          cout <<"introduce el nombre que desea buscar iniciando con mayusculas \n";
          cin>>bu;

      for (i=0;i<20;i++)
        {
        if (bu==nom2[i])
           {
           cout<< "\n Si se encontro el nombre >>"<<bu<<"<< En la fila: "<<i+1<<endl<<endl<<endl;
           r=false;

           }
        }
     if (r){
        cout << "\n El nombre >> "<<bu<<" << No exite en el listado!!!!\n"<<endl;
     }
}


    protected:

    private:
};

#endif // LISTADO_H
