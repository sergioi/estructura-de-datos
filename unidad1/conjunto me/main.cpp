#include <iostream>
#include "operaciones.h"
#include <stdlib.h>
using namespace std;

int main()
{int A,B;

    cout<<"ingresa la cantidad de datos del conunto a"<<endl;
        cin>>A;
    cout<<"ingresa la cantidad de datos del conunto b"<<endl;
        cin>>B;
    cout<<" ingresa los" << A <<"elementos del conjuto a"<<endl;
int arrr[A];
int asss[B];
    for (int i=0;i<A;i++)
    {
        cout<<"elemento "<<i+1<<":"<<endl<<"--> ";
        cin>>arrr[i];
    }
    cout<<" ingresa los" << B <<"elementos del conjuto b"<<endl;
    for (int i=0;i<B;i++)
    {
        cout<<"elemento "<<i+1<<":"<<endl<<"--> ";
        cin>>asss[i];
    }
    system ("cls");
cout<<"CONJUNTO A: "<<endl;
for (int a=0;a<A;a++)
{
    cout<<arrr[a]<<" ";
}cout<<endl;
cout<<"CONJUNTO B: "<<endl;
for (int a=0;a<B;a++)
{
    cout<<asss[a]<<" ";
}cout<<endl;

operaciones pa;
pa.unioon(arrr,asss,A,B);
cout<<"INTERSECCION"<<endl<<endl;
pa.intersecion(arrr,asss,A,B);
    return 0;
}
