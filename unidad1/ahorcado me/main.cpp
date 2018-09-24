#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "juego.h"
using namespace std;

string palabraoriginal;
string palabramostrar;
int vidas;
void ingresar(char x);
void inicializar();

int main()
{
    juego ini;
inicializar();





while (vidas>0 && palabramostrar!=palabraoriginal)
        {char x;

        ini.mostrar(palabramostrar,vidas);
        cin>>x;
        ingresar(x);


        if (vidas>0 && palabramostrar==palabraoriginal)
           {

            cout<<"adivinaste!! la palabra era :"<<palabraoriginal<<endl;}
        else if(vidas==0)
           {

            cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |    *|* "<<endl
            <<" |  _* | *_"<<endl
            <<" |    | | "<<endl
            <<" |   |   |  "<<endl
            <<"--      "<<endl<<endl;
        cout<<"perdiste, la palabra era: "<<palabraoriginal<<endl;}

        }
    return 0;
}



void inicializar()
{
juego lis;



    vidas=10;
 palabraoriginal=lis.lista();
 int limite=palabraoriginal.length();
    for (int i=0;i<limite;i++)
    {
        if(palabraoriginal[i]>='A' && palabraoriginal[i]<='Z')
        {
            palabraoriginal[i]+=32;
        }
    }

    for(int i=0; i<limite;i++)
    {
        if(palabraoriginal[i]>='a' && palabraoriginal[i]<='z')
        {
            palabramostrar+='-';

        }
        else
        {palabraoriginal+=palabraoriginal[i];

        }
    }
}

void ingresar(char x)
{ bool perdividas=true;
int limite=palabraoriginal.length();
   for (int i =0;i<limite;i++)
   {

    if(x==palabraoriginal[i])
       {
           perdividas=false;
           palabramostrar[i]=x;

       }
   }system("cls");

   if (perdividas)vidas--;
}
