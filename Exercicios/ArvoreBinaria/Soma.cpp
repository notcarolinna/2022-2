// Crie um método int soma() que retorna a soma de todos os números
// que estão na árvore.

int soma(Nodo *raiz)
{
    if (raiz == NULL)
        return 0;
    return (raiz->valorNodo + soma(raiz->left) + soma(raiz->right));
}

