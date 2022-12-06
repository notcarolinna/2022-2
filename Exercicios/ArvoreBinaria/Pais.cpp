// Crie um método int pai(int n) que retorna o valor do pai de n ou -1
// se n estiver na raiz ou se não estiver na árvore.

Node *Tree::getParent(int element)
{
    Node *aux = searchNodeRef(element, root);
    if (aux == NULL)
        throw 0;

    return aux->father;
}
