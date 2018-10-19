#include "cambio.h"
#include <iostream>
using namespace std;
cambio::cambio()
{
    //ctor
}
void cambio::monedas(float a)
{ if (a==1)
        {
            cout<<a<<"monedas de $1"<<endl;
        }
    else
          if(a>=200)
        {int aux;
          aux=a/200;
         cout<<aux<<"billete de $200"<<endl;
          a=a-(aux*200);
          monedas(a);}


        else
            if(a>=100)
            {int aux;
          aux=a/100;
         cout<<aux<<"billete de $100"<<endl;
          a=a-(aux*100);
          monedas(a);}
        else
            if(a>=50)
            {int aux;
          aux=a/50;
         cout<<aux<<"billete de $50"<<endl;
          a=a-(aux*50);
          monedas(a);}
        else
            if(a>=20)
            {int aux;
          aux=a/20;
         cout<<aux<<"billete de $20"<<endl;
          a=a-(aux*20);

          monedas(a);}

          else
            if(a>=10)
            {int aux;
          aux=a/10;
         cout<<aux<<"moneda de $10"<<endl;
          a=a-(aux*10);
          monedas(a);}
else
            if(a>=5)
            {int aux;
          aux=a/5;
         cout<<aux<<"moneda de $5"<<endl;
          a=a-(aux*5);
          monedas(a);}
        else
            if(a>=2)
            {int aux;
          aux=a/2;
         cout<<aux<<"moneda de $2"<<endl;
          a=a-(aux*2);
          monedas(a);}

}

