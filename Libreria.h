#include <iostream>

using namespace std;

struct Nodo
{
    int Dato;
    Nodo *Izquierda;
    Nodo *Deracha;

    Nodo(int Entero) : Dato(Entero), Izquierda(NULL), Deracha(NULL) {}
};

void ImprimirArbol(Nodo *Raiz, int Separacion = 3, int Espacio = 5)
{
    // Imprimir diagrama si Raíz != NULL.
    if (Raiz == NULL)
        return;

    Separacion += Espacio;

    // Imprimir rama derecha.
    ImprimirArbol(Raiz->Deracha, Separacion);

    // Imprimir nodo actual.
    cout << endl;
    for (int i = Espacio; i < Separacion; i++)
        cout << " ";

    cout << Raiz->Dato << endl;

    // Imprimir rama izquierda.
    ImprimirArbol(Raiz->Izquierda, Separacion);
}