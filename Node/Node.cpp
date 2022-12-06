#include <iostream>
#include "Node.hpp"

using namespace std;

Node::Node(int elem)
{
    left = NULL;
    right = NULL;
    father = NULL;
    element = elem;
}

void Node::print()
{
    cout << "Nodo: " << element << endl;
    cout << "Esq: ";
    if (left != NULL)
        cout << left->element;
    else
        cout << "NULL";
    cout << endl;

    cout << "\tDir: ";
    if (right != NULL)
        cout << right->element;
    else
        cout << "NULL";
    cout << endl;
}
