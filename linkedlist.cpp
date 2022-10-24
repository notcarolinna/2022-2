#include <iostream>
using namespace std;

class Node
{
public:
    int Value;
    Node *Next;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->Value << endl;
        n = n->Next;
    }
}

void insertAtTheFront(Node **head, int newValue) // Node**head: como na main está sendo passado um ponteiro, aqui precisa ter um ponteiro para um ponteiro.
{
    // 1. Criar um newNode.
    Node *newNode = new Node();
    newNode->Value = newValue;

    /*
     o Node é o do parâmetro, que tem um ponteiro para o endereço de memória do head (primeiro elemento da lista), aí foi criado um newNode
     o valor do newNode criado na L27 vai receber o valor do newValue do parâmetro
    */

    // 2. Colocar o newNode na frente do head atual.
    newNode->Next = *head;

    // 3. Fazer o head apontar para o newNode. Cara, teu head agora é o newNode e não o head atual, troca.
    *head = newNode;
}

void insertAtTheEnd(Node **head, int newValue)
{
    // 1. Criar um newNode
    Node *newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;

    // 2. Se a lista estiver vazia, o newNode será o head
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // 3. Procura o último nodo
    Node *last = *head;
    while (last->Next != NULL)
    {
        last = last->Next;
    }

    // 4. Insere o newNode depois do último nodo
    last->Next = newNode;
}

void insertAfter(Node *previous, int newValue)
{

    // 1. Verificar se o nodo anterior é NULL
    if (previous == NULL)
    {
        cout << "Previous can not be NULL";
        return;
    }

    // 2. Criar um newNode
    Node *newNode = new Node();
    newNode->Value = newValue;

    // 3. Inserir o newNode depois do nodo dado
    newNode->Next = previous->Next;
    previous->Next = newNode;
}


int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->Value = 1; // definição de valor.
    head->Next = second;
    second->Value = 2; // definição de valor.
    second->Next = third;
    third->Value = 3; // definição de valor.
    third->Next = NULL;

    insertAtTheFront(&head, 0); // endereço de memória do head e o valor a ser inserido na lista.
    insertAtTheFront(&head, -1);
    insertAtTheEnd(&head, 4);
    insertAtTheEnd(&head, 5);
    insertAfter(head, 75);
    insertAfter(second, 64);
    insertAfter(third, 35);
    printList(head); // passa o head como parâmetro porque aponta pro segundo e o segundo pro terceiro.
}
