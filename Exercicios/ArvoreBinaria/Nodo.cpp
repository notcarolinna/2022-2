// Crie um método que retorna um nodo específico

Node *Tree::procuraNode(int element, Node *Node)
{

    if (Node == NULL)
        return NULL;

    if (Node->element == element)
        return Node;

    if (element < Node->element)
        return procuraNode(element, Node->left);
    else
        return procuraNode(element, Node->right);

    return NULL;
}
