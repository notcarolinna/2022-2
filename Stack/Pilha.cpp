#include "Pilha.hpp"

#define FullStackException 1
#define EmptyStackException 2

Pilha::Pilha()
{
    capacidade = 10;
    pilha = new int[capacidade];
    count = 0;
}

void Pilha::push(int element)
{
    if (count == capacidade)
        throw FullStackException;
    pilha[count] = element;
    count++;
}

int Pilha::pop()
{
    if (count == 0)
        throw EmptyStackException;
    int num = pilha[count - 1];
    count--;
    return num;
}

int Pilha::top()
{
    if (count == 0)
        throw EmptyStackException;
    return pilha[count - 1];
}

int Pilha::size()
{
    return count;
}

bool Pilha::isEmpty()
{
    return count == 0;
}

void Pilha::clear()
{
    delete[] pilha;
    pilha = new int[10];
    count = 0;
}
