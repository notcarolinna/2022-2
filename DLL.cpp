#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;
};

void push(Node **head_ref, int new_data) //insert at the front of DLL
{
  //node allocation
  Node *new_node = new Node();
  new_node->data = new_data;
  
  //next of new node is the new head  
  new_node->next = (*head_ref);
  new_node->prev = NULL;

  //change prev of head node to new node

  if ((*head_ref) != NULL)
      (*head_ref)->prev = new_node;
      (*head_ref) = new_node;
}

void insertAfter(Node *prev_node, int new_data) //insert after a given node
{
  //check if the given node is NULL
  if (prev_node == NULL) {
    cout << "the given previous node cannot be NULL";
    return;
  }
  
//node allocation
  Node *new_node = new Node();
  new_node->data = new_data;
  
//troca de valores
  new_node->next = prev_node->next;
  prev_node->next = new_node;
  new_node->prev = prev_node;
  
  if (new_node->next != NULL)
    new_node->next->prev = new_node;
}

void append(Node **head_ref, int new_data) //insert at the end
{
 //node allocation
  Node *new_node = new Node();
  Node *last = *head_ref;
  new_node->data = new_data;
  
  //new node will become the last node, so it's pointing to NULL
  new_node->next = NULL;
  
  
  if (*head_ref == NULL) {
    new_node->prev = NULL;
    *head_ref = new_node;
    return;
  }
  
  
  while (last->next != NULL)
  last = last->next;
  last->next = new_node;
  new_node->prev = last;

  return;
}

void printList(Node *node) {
  Node *last;

  cout << endl;

  cout << "Forward: " << endl;
  while (node != NULL) {
    cout << " " << node->data << " ";
    last = node;
    node = node->next;
  }

  cout << endl << endl;

  cout << "Reverse: " << endl;
  while (last != NULL) {
    cout << " " << last->data << " ";
    last = last->prev;
  }
}

int main() {
  // Empty list
  Node *head = NULL;

  append(&head, 6);
  push(&head, 7);
  push(&head, 1);
  append(&head, 4);
  insertAfter(head->next, 8);
  printList(head);

  return 0;
}
