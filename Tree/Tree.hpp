#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

#include "Node.hpp"

class Tree
{
private:
    Node *root;
    int count;

    int countLeaves(Node *n);
    Node *searchNodeRef(int elem, Node *n);
    Node *smallest(Node *n);
    void positionsPreAux(Node *n, list<int> &lista);
    void positionsPosAux(Node *n, list<int> &lista);
    void positionsCentralAux(Node *n, list<int> &lista);
    int height(Node *n);
    int countNodos(Node *n);
    void GeraConexoesDOT(Node *nodo);
    void GeraNodosDOT(Node *nodo);
    int contaNodosFolha(Node *nodo);

public:
    Tree();
    void clear();
    bool isEmpty();
    int size();
    int getRoot();
    void add(int element);
    Node *add(Node *nodo, int element, Node *father);
    bool contains(int elem);
    Node *getLeft(int element);
    Node *getRigh(int element);
    Node *getParent(int element);
    bool remove(int element);
    bool set(int old, int element);
    list<int> positionsWidth();
    list<int> positionsCentral();
    list<int> positionsPre();
    list<int> positionsPos();
    bool isExternal(int element);
    bool isInternal(int element);
    int height();
    int level(int element);
    int countLeaves();
    void GeraConexoesDOT();
    void GeraNodosDOT();
    void GeraDOT();
    int contaNodosFolha();
};
