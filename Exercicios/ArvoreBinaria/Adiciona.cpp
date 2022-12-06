// Crie um método de inserção de elementos na árvore, respeitando o criterio
// de ordenação.

Nodo *Tree::add(Nodo *Nodo, int valorNodo, Nodo *nodoPai)

{
    if (Nodo == NULL)
    {
        Nodo *aux = new Nodo(valorNodo);
        aux->nodoPai = nodoPai;
        return aux;
    }

    if (valorNodo > Nodo->valorNodo)
    {
        Nodo->right = add(Nodo->right, valorNodo, Nodo);
    }
    else
    {
        Nodo->left = add(Nodo->left, valorNodo, Nodo);
    }

    return Nodo;
}
