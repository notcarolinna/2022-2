// Crie um método de inserção de elementos na árvore, respeitando o criterio
// de ordenação.

Node *Tree::add(Node *node, int element, Node *father)
{
    if (node == NULL)
    {
        Node *aux = new Node(element);
        aux->father = father;
        return aux;
    }

    if (element > node->element)
    {
        node->right = add(node->right, element, node);
    }
    else
    {
        node->left = add(node->left, element, node);
    }

    return node;
}
