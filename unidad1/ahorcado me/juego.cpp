#include "juego.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

#include <conio.h>
#include <stdlib.h>

#include <string.h>
#include <cstdlib>

using namespace std;

juego::juego()
{
    //ctor
}
string juego::lista()
{
    int j=0;
    char plbs[10][10];

   strcpy(plbs[0],"perro");
   strcpy(plbs[1],"jirafa");
   strcpy(plbs[2],"bufalo");
   strcpy(plbs[3],"caballo");
   strcpy(plbs[4],"gallina");
   strcpy(plbs[5],"leopardo");
   strcpy(plbs[5],"jabali");
   strcpy(plbs[5],"cocodrilo");
   strcpy(plbs[5],"leon");
   strcpy(plbs[5],"orangutan");
   strcpy(plbs[5],"aguila");
   strcpy(plbs[5],"tortuga");
   strcpy(plbs[5],"venado");
   strcpy(plbs[5],"elefante");

   srand(time (0) );
   j=(rand()%11);

return plbs[j];
}
void juego::mostrar(string a, int s)
{
    int vidas= s;

    cout<<"tienes "<<vidas<<" vidas."<<endl<<endl;
    if (vidas==10)
    {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |      "<<endl
            <<" |      "<<endl
            <<" |      "<<endl
            <<" |      "<<endl
            <<" |      "<<endl
            <<"--      "<<endl<<endl;
    } else
          if (vidas==9)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |      "<<endl
            <<" |      "<<endl
            <<" |      "<<endl
            <<" |      "<<endl
            <<"--      "<<endl<<endl;

          }
          else
          if (vidas==8)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |     |  "<<endl
            <<" |       "<<endl
            <<" |       "<<endl
            <<" |        "<<endl
            <<"--       "<<endl<<endl;

          }
          else
          if (vidas==7)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |     | "<<endl
            <<" |     | "<<endl
            <<" |       "<<endl
            <<" |        "<<endl
            <<"--      "<<endl<<endl;

          }else
          if (vidas==6)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |    *|  "<<endl
            <<" |     | "<<endl
            <<" |        "<<endl
            <<" |        "<<endl
            <<"--      "<<endl<<endl;

          }
          else
          if (vidas==5)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |    *|*"<<endl
            <<" |     | "<<endl
            <<" |       "<<endl
            <<" |        "<<endl
            <<"--      "<<endl<<endl;

          }
          else
          if (vidas==4)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |    *|* "<<endl
            <<" |  _* | *_"<<endl
            <<" |       "<<endl
            <<" |        "<<endl
            <<"--      "<<endl<<endl;

          }else
          if (vidas==3)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |    *|* "<<endl
            <<" |  _* | *_"<<endl
            <<" |       "<<endl
            <<" |        "<<endl
            <<"--      "<<endl<<endl;

          }else
          if (vidas==2)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |    *|* "<<endl
            <<" |  _* | *_"<<endl
            <<" |    |   "<<endl
            <<" |       "<<endl
            <<"--      "<<endl<<endl;

          }else
          if (vidas==1)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |    *|* "<<endl
            <<" |  _* | *_"<<endl
            <<" |    | |   "<<endl
            <<" |   |   |  "<<endl
            <<"--      "<<endl<<endl;

          }else
          if (vidas==0)
          {
        cout<<" _______"<<endl
            <<" |     |"<<endl
            <<" |     O "<<endl
            <<" |    *|* "<<endl
            <<" |  _* | *_"<<endl
            <<" |    | | "<<endl
            <<" |   |   |  "<<endl
            <<"--      "<<endl<<endl;

          }


    cout<<a<<endl;

}
