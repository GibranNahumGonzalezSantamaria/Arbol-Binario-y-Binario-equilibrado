#include <iostream>

using namespace std;

struct Nodo
{
    int Dato;
    Nodo *Izquierda;
    Nodo *Deracha;

    // Constructor para inicializar miembros de la estructura.
    Nodo(int Entero)
    {
        Dato = Entero;
        Izquierda = NULL;
        Deracha = NULL;
    }

    /* El constructor ayuda a simplificar código al momento de declarar cada nodo.

        En lugar de estas instrucciones:
            struct Nodo *Nodo1 = (struct Nodo *)malloc(sizeof(struct Nodo));
            Nodo1->Dato = 10;
            Nodo1->Anterior = NULL;
            Nodo1->Siguiente = Nodo2;

        Podemos usar solo una instrucción indicando su recorrido:
            Nodo *Raiz = new Nodo(0);
    */
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
