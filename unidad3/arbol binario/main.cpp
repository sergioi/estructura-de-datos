#include <iostream>
#include <cstdlib>

using namespace std;
struct Nodo {
int dato;
Nodo *der;
Nodo *izq;
};
Nodo *arbol= NULL;

//operacione a realizar.
Nodo *crearNodo (int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *,int);
void mostrarMayor(Nodo *,int);
void mostrarHojas(Nodo *,int);
bool busqueda(Nodo *,int );
void preorden (Nodo *);
void recoridoHoja_raiz(Nodo *,int);

int main()
{
    int dato,opcion,contador=0;
    do
    {
        cout<<"\t:MENU:."<<endl;
        cout<<"1.-insertar un nuevo nodo"<<endl;
        cout<<"2.-mostrar arbolo"<<endl;
        cout<<"3.-mostrar mayores a raiz"<<endl;
        cout<<"4.-mostrar solo hojas."<<endl;
        cout<<"5.-buscar elemento en el arbol"<<endl;
        cout<<"6.-recorrido en preorden"<<endl;
        cout<<"7.-mostrar recorrido dadao una hoja"<<endl;
        cout<<"8.-salir"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:
           {
            cout<<"digite un numero";
            cin>>dato;
            insertarNodo(arbol,dato);
            cout<<"\n";
            system("pause");
            }
          break;
        case 2:
            {
               cout<<"mostrando arbol"<<endl<<endl;
                mostrarArbol(arbol,contador);
                cout<<endl;
                system("pause");
            }
            break;
        case 3:
            {
               cout<<"mostrando nodos mayores a raiz"<<endl<<endl;
                mostrarMayor(arbol,contador);
                cout<<endl;
                system("pause");
            }
            break;
             case 4:
            {
               cout<<"-Mostrar solo hojas"<<endl<<endl;
                mostrarHojas(arbol,contador);
                cout<<endl;
                system("pause");
            }
            break;
        case 5:
            {
               cout<<"ingresa el valor que quieres buscar"<<endl<<endl;
                cin>>dato;
                if (busqueda(arbol,dato)==true)
                {
                    cout<<"El elemento "<<dato<<" si se encuetra en el arbol"<<endl;
                     system("pause");

                }
                else
                {
                    cout<<"elemento no encontrado"<<endl;
                    system("pause");
                }
            }
            break;
        case 6:
            {cout<<"recorrido en preorden"<<endl;
            preorden(arbol);
            system("pause");}
        break;
        case 7:
            {cout<<" ingresa el valor de la hoja para inciar recorrido"<<endl;
            cin>>dato;
            recoridoHoja_raiz(arbol,dato);
            system("pause");
             }
        break;



        }
        system("cls");
    }while (opcion !=8);


    return 0;
}
//crea nuevo nodo
Nodo *crearNodo(int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo-> dato = n;
    nuevo_nodo->der= NULL;
    nuevo_nodo->izq=NULL;

    return nuevo_nodo;
}


void insertarNodo(Nodo *&arbol,int n){
if (arbol ==NULL)
    {Nodo *nuevo_nodo = crearNodo(n);
    arbol=nuevo_nodo;
    }
 else
    {int valorRaiz =arbol->dato;
      if (n<valorRaiz)
          {
             insertarNodo(arbol->izq,n);
          }
     else
        {
        insertarNodo(arbol->der,n);
         }
     }

}
int raiz;//funcio mostral arbol
void mostrarArbol(Nodo *arbol,int cont)
{
  if (arbol==NULL)
  {
      return;
  }
  else
  {
   mostrarArbol(arbol->der,cont+1);
   for (int i=0;i<cont;i++)
        {cout<<"   ";}
      cout<<arbol->dato<<endl;


     mostrarArbol(arbol->izq,cont+1);
  }

}
void mostrarMayor(Nodo *arbol,int cont)
{
if (cont==0)
    { raiz=arbol->dato;
mostrarMayor(arbol->der,cont+1);
cout<<arbol->dato<<endl;}
    else
  if (arbol==NULL)
  {
      return;
  }
  else if (arbol->dato>raiz)
  {//funcio mostral arbol

   mostrarMayor(arbol->der,cont+1);
   for (int i=0;i<cont;i++)
        {cout<<"   ";}
      cout<<arbol->dato<<endl;


     mostrarMayor(arbol->izq,cont+1);
  }

}
int hoja=0;



//funcion para buscar elementos en el arbol
bool busqueda(Nodo *arbol, int n)
{
    if (arbol==NULL)
        {
            return false;//el arbol se encuentra vacio
        }
     else
         if (arbol->dato==n)
         {
             return true; //el nodo es igual al elemento que buscamos
         }
    else if (n < arbol->dato)
        {
            return busqueda(arbol->izq,n);
        }
    else if (n>arbol->dato)
        {
            return busqueda(arbol->der,n);
        }

}
void mostrarHojas(Nodo *arbol,int cont)
{
if (arbol==NULL )
  {
        return;
  }
  else

  {if(arbol->izq==NULL && arbol->der==NULL)
     {
         for (int i=0;i<cont;i++)
         {cout<<"   ";}
         cout<<arbol->dato<<endl<<endl;
     }
      mostrarHojas(arbol->der,cont+1);
      mostrarHojas(arbol->izq,cont+1);
  }
}

void preorden(Nodo *arbol)

{
    if (arbol==NULL)
    {
       return ;


    }
    else
    {
        cout<<arbol->dato<<"-";
        preorden(arbol->izq);
        preorden(arbol->der);
    }
}


void recoridoHoja_raiz(Nodo *arbol, int n)
{
    if (arbol==NULL)
        {
            return ;//el arbol se encuentra vacio
        }
     else
         if (arbol->dato==n)
         {cout<<arbol->dato<<"-";
             return ;//el nodo es igual al elemento que buscamos
         }
    else if (n < arbol->dato)
        {

            recoridoHoja_raiz(arbol->izq,n);
            cout<<arbol->dato<<"-";
            return ;

        }
    else if (n>arbol->dato)
        {   recoridoHoja_raiz(arbol->der,n);
            cout<<arbol->dato<<"-";
            return;

        }

}


