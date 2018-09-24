#include "operaciones.h"
#include <iostream>
using namespace std;
operaciones::operaciones()
{
    //ctor
}
int operaciones::unioon(int a[],int b[],int c,int d)
{
    cout<<"LA UNIÓN DEL CONJUTNO A Y B ES:"<<endl;
 for (int i=0;i<c;i++)
    cout<<a[i]<<"  ";
    for (int i=0;i<d;i++)
    {cout<<b[i]<<"  ";}
    cout<<endl<<endl;
}
int operaciones::intersecion(int a[],int b[],int c,int d)
{
    int inter[c+d];
    int orden=0;
    for (int i=0;i<c;i++)
    {
        for (int p=0;p<d;p++)
        {
            if (a[i]==b[p])
               {inter[orden]=a[i];
            orden++;}
            else
            {

            }


        }
    }
for (int s=0;s<orden;s++)

   {
     cout<<inter[s]<<" ";
   }
   cout<<endl;


}
