// Escreva um método altura() que retorna um inteiro informando a
// altura da árvore.

int Tree::altura(Node *n)
{
    if (n->esquerda == NULL && n->direita == NULL)
        return 0;
    int h = 0;
    if (n->esquerda != NULL)
    {
        int alt = altura(n->esquerda);
        if (alt > h)
            h = alt;
    }
    if (n->direita != NULL)
    {
        int alt = altura(n->direita);
        if (alt > h)
            h = alt;
    }
    return 1 + h;
}
