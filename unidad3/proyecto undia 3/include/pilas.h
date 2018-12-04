#ifndef PILAS_H
#define PILAS_H
using namespace std;

//crecion de n pilas
struct Nodo1{
	int i1;  //variables i e j por cada nodo enl a la pila
	int j1;
	Nodo1 *siguiente1;
};
struct Nodo2{
	int i2;
	int j2;
	Nodo2 *siguiente2;
};
struct Nodo3{
	int i3;
	int j3;
	Nodo3 *siguiente3;
};
 struct Nodo4{
	int i4;
	int j4;
	Nodo4 *siguiente4;
};
struct Nodo5{
	int i5;
	int j5;
	Nodo5 *siguiente5;
};
class pilas
{
    public:
        pilas();
        void agregarPila1(Nodo1 *&,int,int);
        void sacarPila1(Nodo1 *&,int &,int &);
        void agregarPila2(Nodo2 *&,int,int);
        void sacarPila2(Nodo2 *&,int &,int &);
        void agregarPila3(Nodo3 *&,int,int);
        void sacarPila3(Nodo3 *&,int &,int &);
        void agregarPila4(Nodo4 *&,int,int);
        void sacarPila4(Nodo4 *&,int &,int &);
        void agregarPila5(Nodo5 *&,int,int);
        void sacarPila5(Nodo5 *&,int &,int &);
    protected:
    private:
};

#endif // PILAS_H
