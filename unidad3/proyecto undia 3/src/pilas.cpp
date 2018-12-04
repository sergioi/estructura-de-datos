#include "pilas.h"

pilas::pilas()
{
    //ctor
}
void pilas::agregarPila1(Nodo1 *&pila1,int i,int j)
{
	if (i>=1)
    {
        Nodo1 *nuevo_nodo = new Nodo1();
        nuevo_nodo->i1= i;
        nuevo_nodo->j1 = j;
        nuevo_nodo->siguiente1 = pila1;
        pila1 = nuevo_nodo;
    }

}
void pilas::sacarPila1(Nodo1 *&pila1,int &i,int &j){
	Nodo1 *aux = pila1;
	i = aux->i1;
	j=aux->j1;
	pila1 = aux->siguiente1;
	delete aux;
}
void pilas::agregarPila2(Nodo2 *&pila2,int i,int j)
{

        Nodo2 *nuevo_nodo = new Nodo2();
        nuevo_nodo->i2= i;
        nuevo_nodo->j2 = j;
        nuevo_nodo->siguiente2 = pila2;
        pila2 = nuevo_nodo;


}
void pilas::sacarPila2(Nodo2 *&pila2,int &i,int &j){
	Nodo2 *aux = pila2;
	i = aux->i2;
	j=aux->j2;
	pila2 = aux->siguiente2;
	delete aux;
}
void pilas::agregarPila3(Nodo3 *&pila3,int i,int j)
{

        Nodo3 *nuevo_nodo = new Nodo3();
        nuevo_nodo->i3= i;
        nuevo_nodo->j3 = j;
        nuevo_nodo->siguiente3 = pila3;
        pila3 = nuevo_nodo;


}
void pilas::sacarPila3(Nodo3 *&pila3,int &i,int &j){
	Nodo3 *aux = pila3;
	i = aux->i3;
	j=aux->j3;
	pila3 = aux->siguiente3;
	delete aux;
}
void pilas::agregarPila4(Nodo4 *&pila4,int i,int j)
{

        Nodo4 *nuevo_nodo = new Nodo4();
        nuevo_nodo->i4= i;
        nuevo_nodo->j4 = j;
        nuevo_nodo->siguiente4 = pila4;
        pila4 = nuevo_nodo;


}
void pilas::sacarPila4(Nodo4 *&pila4,int &i,int &j){
	Nodo4 *aux = pila4;
	i = aux->i4;
	j=aux->j4;
	pila4 = aux->siguiente4;
	delete aux;
}



void pilas::agregarPila5(Nodo5 *&pila5,int i,int j)
{

        Nodo5 *nuevo_nodo = new Nodo5();
        nuevo_nodo->i5= i;
        nuevo_nodo->j5 = j;
        nuevo_nodo->siguiente5 = pila5;
        pila5 = nuevo_nodo;


}
void pilas::sacarPila5(Nodo5 *&pila5,int &i,int &j){
	Nodo5 *aux = pila5;
	i = aux->i5;
	j=aux->j5;
	pila5 = aux->siguiente5;
	delete aux;
}
