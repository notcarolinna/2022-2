#include <iostream>
#include "Fila.hpp"
#include "Pilha.hpp"

using namespace std;

//Criar uma função que receba uma fila e transforme em pilha

Pilha *transformaFilaPilha(Fila *fila)
{
    Pilha *pilha = new Pilha();
    int *aux = new int[fila->size()];

    for (int i = fila->size() - 1; i > -1; i--)
    {
        aux[i] = fila->dequeue();
    }

    for (int i = 0; i < sizeof(aux) - 1; i++)
    {
        pilha->push(aux[i]);
    }

    return pilha;
}

int main()
{
    Fila *fila = new Fila();
    fila->enqueue(10);
    fila->enqueue(20);
    fila->enqueue(15);
    fila->enqueue(14);
    fila->enqueue(25);
    fila->enqueue(12);
    fila->enqueue(18);

    cout << fila->size() << endl;

    Pilha *pilha = transformaFilaPilha(fila);

    cout << pilha->size() << endl;

    while (!pilha->isEmpty())
    {
        cout << pilha->pop() << endl;
    }
}
