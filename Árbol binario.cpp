#include <iostream>
#include "Libreria.h"

using namespace std;

int main()
{
    // Asignar valores al árbol binario.
    Nodo *Raiz = new Nodo(0);
    Raiz->Izquierda = new Nodo(1);
    Raiz->Deracha = new Nodo(2);
    Raiz->Izquierda->Izquierda = new Nodo(3);
    Raiz->Izquierda->Deracha = new Nodo(4);
    Raiz->Izquierda->Izquierda->Izquierda = new Nodo(5);
    Raiz->Izquierda->Izquierda->Deracha = new Nodo(6);
    Raiz->Izquierda->Izquierda->Izquierda->Izquierda = new Nodo(7);
    Raiz->Izquierda->Izquierda->Izquierda->Deracha = new Nodo(8);
    Raiz->Izquierda->Izquierda->Izquierda->Izquierda->Izquierda = new Nodo(9);

    // Imprimir el diagrama del árbol.
    cout << " * Diagrama del Arbol Binario:" << endl;
    ImprimirArbol(Raiz);

    // Liberar memoria usando "delete" en lugar de "free" porque los nodos son objetos.
    delete Raiz->Izquierda->Izquierda->Izquierda->Izquierda->Izquierda;
    delete Raiz->Izquierda->Izquierda->Izquierda->Deracha;
    delete Raiz->Izquierda->Izquierda->Izquierda->Izquierda;
    delete Raiz->Izquierda->Izquierda->Deracha;
    delete Raiz->Izquierda->Izquierda->Izquierda;
    delete Raiz->Izquierda->Deracha;
    delete Raiz->Izquierda->Izquierda;
    delete Raiz->Deracha;
    delete Raiz->Izquierda;
    delete Raiz;

    return 0;
}
