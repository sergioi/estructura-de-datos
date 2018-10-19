#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;
void orden(string a,int p,string aux)//declaracion de la fuccion recursiva
{
    if ( p==0)
    { aux+=a[p];
    cout<<aux<<endl;
    {if (aux==a)  //comparacion de cadenas para decisiion
    {
        cout<<"si es palindromo";
    }
    else
    cout<<"no es palindromo";}

     }
   else
        {

        aux+=a[p];
        p=p-1;
            orden(a,p,aux);//fucion llamndose a si misma
        }
}



int main()
{
    bool res=true;
    char a;
    do{
            system("cls");
    string cadena;
    string avalu;
    cout<<"ingresa la palabra a evaluar sin empacios:"<<endl;
    cin>>cadena;
    int p=cadena.size();
    p=p-1;
    string aux="";

orden(cadena,p,aux);

cout<<endl<<"quieres analizar otra palabra?"<<endl;
cin>>a;
{if(a=='s')
{
    res=true;
}
else {res=false;}
    }}
while (res==true);
    return 0;
}

