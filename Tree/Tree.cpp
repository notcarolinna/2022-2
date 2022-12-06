#include <iostream>
#include <cstdlib>
#include "Tree.hpp"
#include "Queue.hpp"

using namespace std;

Tree::Tree()
{
    root = NULL;
    count = 0;
}

void Tree::clear()
{
    root = NULL;
    count = 0;
}

bool Tree::isEmpty()
{
    return (root == NULL);
}

int Tree::size()
{
    return count;
}

int Tree::getRoot()
{
    if (isEmpty())
    {
        throw 0;
    }
    return root->element;
}

void Tree::add(int element)
{
    root = add(root, element, NULL);
    count++;
}

Node *Tree::add(Node *nodo, int element, Node *father)
{
    if (nodo == NULL)
    {
        Node *aux = new Node(element);
        aux->father = father;
        return aux;
    }

    if (element > nodo->element)
    {
        nodo->right = add(nodo->right, element, nodo);
    }
    else
    {
        nodo->left = add(nodo->left, element, nodo);
    }

    return nodo;
}

Node *Tree::searchNodeRef(int element, Node *nodo)
{

    if (nodo == NULL)
        return NULL;

    if (nodo->element == element)
        return nodo;

    if (element < nodo->element)
        return searchNodeRef(element, nodo->left);
    else
        return searchNodeRef(element, nodo->right);

    return NULL;
}

bool Tree::contains(int elem)
{
    Node *nAux = searchNodeRef(elem, root);
    return (nAux != NULL);
}

Node *Tree::getLeft(int element)
{
    Node *aux = searchNodeRef(element, root);
    if (aux == NULL)
        throw 0;
    if (aux->left == NULL)
        return NULL;
    return aux->left;
}

Node *Tree::getRigh(int element)
{
    Node *aux = searchNodeRef(element, root);
    if (aux == NULL)
        throw 0;
    if (aux->right == NULL)
        return NULL;
    return aux->right;
}

Node *Tree::getParent(int element)
{
    Node *aux = searchNodeRef(element, root);
    if (aux == NULL)
        throw 0;

    return aux->father;
}

bool Tree::remove(int element)
{
    return false;
}

bool Tree::set(int old, int element)
{
    return 0;
}

list<int> Tree::positionsWidth()
{
    list<int> lista;
    Queue fila;

    if (root != NULL)
    {
        fila.enqueue(root);
        while (!fila.isEmpty())
        {
            Node *aux = fila.dequeue();

            lista.push_back(aux->element);

            if (aux->left != NULL)
                fila.enqueue(aux->left);
            if (aux->right != NULL)
                fila.enqueue(aux->right);
        }
    }

    return lista;
}

list<int> Tree::positionsPre()
{
    list<int> lista;
    positionsPreAux(root, lista);
    return lista;
}
void Tree::positionsPreAux(Node *n, list<int> &lista)
{
    if (n != NULL)
    {
        lista.push_back(n->element);
        positionsPreAux(n->left, lista);
        positionsPreAux(n->right, lista);
    }
}

list<int> Tree::positionsPos()
{
    list<int> lista;
    positionsPosAux(root, lista);
    return lista;
}
void Tree::positionsPosAux(Node *n, list<int> &lista)
{
    if (n != NULL)
    {
        positionsPosAux(n->left, lista);
        positionsPosAux(n->right, lista);
        lista.push_back(n->element);
    }
}

list<int> Tree::positionsCentral()
{
    list<int> lista;
    positionsCentralAux(root, lista);
    return lista;
}
void Tree::positionsCentralAux(Node *n, list<int> &lista)
{
    if (n != NULL)
    {
        positionsCentralAux(n->left, lista);
        lista.push_back(n->element);
        positionsCentralAux(n->right, lista);
    }
}

bool Tree::isExternal(int element)
{
    return false;
}

bool Tree::isInternal(int element)
{
    return false;
}

int Tree::countNodos(Node *n)
{
    return 0;
}

int Tree::height()
{
    if (root == NULL)
        return 0;
    return height(root);
}
int Tree::height(Node *n)
{
    if (n->left == NULL && n->right == NULL)
        return 0;
    int h = 0;
    if (n->left != NULL)
    {
        int alt = height(n->left);
        if (alt > h)
            h = alt;
    }
    if (n->right != NULL)
    {
        int alt = height(n->right);
        if (alt > h)
            h = alt;
    }
    return 1 + h;
}

int Tree::level(int element)
{
    return -1;
}

int Tree::countLeaves()
{
    return 0;
}
int Tree::countLeaves(Node *n)
{
    return 0;
}

void Tree::GeraConexoesDOT(Node *nodo)
{
    if (nodo == NULL)
        return;

    GeraConexoesDOT(nodo->left);
    if (nodo->left)
        cout << "\"node" << nodo->element << "\":esq -> \"node" << nodo->left->element << "\" " << endl;
    GeraConexoesDOT(nodo->right);
    if (nodo->right)
        cout << "\"node" << nodo->element << "\":dir -> \"node" << nodo->right->element << "\" " << endl;
}

void Tree::GeraNodosDOT(Node *nodo)
{
    if (nodo == NULL)
        return;

    GeraNodosDOT(nodo->left);
    cout << "node" << nodo->element << "[label = \"<esq> | " << nodo->element << " | <dir> \"]" << endl;
    GeraNodosDOT(nodo->right);
}

void Tree::GeraConexoesDOT()
{
    GeraConexoesDOT(root);
}

void Tree::GeraNodosDOT()
{
    GeraNodosDOT(root);
}

void Tree::GeraDOT()
{
    cout << "digraph g { \nnode [shape = record,height=.1];\n"
         << endl;

    GeraNodosDOT();
    cout << endl;
    GeraConexoesDOT();
    cout << "}" << endl;
}

int Tree::contaNodosFolha(Node *nodo)
{
    if (nodo != NULL)
    {
        if (nodo->left == NULL && nodo->left == NULL)
        {
            return 1;
        }
        else
        {
            return contaNodosFolha(nodo->left) + contaNodosFolha(nodo->right);
        }
    }

    return 0;
}

int Tree::contaNodosFolha()
{
    return contaNodosFolha(root);
}
