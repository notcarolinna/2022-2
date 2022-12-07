// Crie um método que retorna a quantidade de nodos folha
int Tree::contaNodesFolha(Node *Node)
{
    if (Node != NULL)
    {
        if (Node->esquerda == NULL && Node->direita == NULL)
        {
            return 1;
        }
        else
        {
            return contaNodesFolha(Node->esquerda) + contaNodesFolha(Node->direita);
        }
    }

    return 0;
}
