#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *back = NULL;
struct node *temp;

void Insert() // Insere um elemento na fila
{
    int val;
    cout << "Insert the element in queue : " << endl;
    cin >> val;
    if (back == NULL)
    {
        back = (struct node *)malloc(sizeof(struct node));
        back->next = NULL;
        back->data = val;
        front = back;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        back->next = temp;
        temp->data = val;
        temp->next = NULL;
        back = temp;
    }
}

void Delete() // Remove um elemento da fila
{
    temp = front;
    if (front == NULL)
    {
        cout << "Underflow" << endl;
        return;
    }
    else if (temp->next != NULL)
    {
        temp = temp->next;
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front);
        front = temp;
    }
    else
    {
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front);
        front = NULL;
        back = NULL;
    }
}

void PrintQueue() // Mostra todos os elementos da fila
{
    temp = front;

    if ((front == NULL) && (back == NULL))
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice;
    cout << "1) Insert an element to queue" << endl;
    cout << "2) Delete an element from queue" << endl;
    cout << "3) PrintQueue all the elements of queue" << endl;
    cout << "4) Exit" << endl;

    do
    {
        cout << "Enter your choice : " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            PrintQueue();
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);
    return 0;
}

/*
FIFO: First in first out
Métodos:
enqueue(e): insere o elemento no final da fila.
dequeue(): remove e retorna o elemento do início da fila.
head(): retorna, mas não remove, o primeiro elemento da fila.
size(): retorna o número de elementos da fila.
isEmpty: retorna true se a fila estiver vazia.
clear(): esvazia a fila.
*/
