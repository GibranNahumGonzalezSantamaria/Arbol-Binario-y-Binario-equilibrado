#include <iostream>
#include "Libreria.h"

using namespace std;

int main()
{
    // Asignar valores al árbol.
    Nodo *Raiz = new Nodo(0);
    Raiz->Izquierda = new Nodo(1);
    Raiz->Deracha = new Nodo(2);
    Raiz->Izquierda->Izquierda = new Nodo(3);
    Raiz->Izquierda->Deracha = new Nodo(4);
    Raiz->Deracha->Izquierda = new Nodo(5);
    Raiz->Deracha->Deracha = new Nodo(6);

    // Imprimir el diagrama del árbol.
    cout << " * Diagrama del Arbol Binario Equilibrado:" << endl;
    ImprimirArbol(Raiz);

    // Liberar la memoria.
    delete Raiz->Deracha->Deracha;
    delete Raiz->Deracha->Izquierda;
    delete Raiz->Izquierda->Deracha;
    delete Raiz->Izquierda->Izquierda;
    delete Raiz->Deracha;
    delete Raiz->Izquierda;
    delete Raiz;

    return 0;
}