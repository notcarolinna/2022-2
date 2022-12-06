#ifndef Fila_hpp
#define Fila_hpp

class Fila
{
    int *fila;
    int capacidade;
    int count;
    int primeiro;
    int ultimo;

public:
    Fila();
    void enqueue(int element);
    int dequeue();
    bool isEmpty();
    int head();
    int size();
    void clear();
};

#endif
