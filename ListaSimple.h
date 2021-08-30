#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include "Nodo.h"
#include <iostream>

using namespace std;

class ListaSimple
{
    public:
        ListaSimple();
        ~ListaSimple();
        bool vacia();
        void insertar(int, int);
        void insertarInicio(int);
        void insertarFinal(int);
        int buscar(int);
        void eliminar(int);
        void eliminarTodo(Nodo);
        void mostrar(int);
        void mostrarTodo();
        int tamano();


    private:
        Nodo *h;
};

#endif // LISTASIMPLE_H
