#include <iostream>
#define MAX 1000
using namespace std;

// implementing basic stack operations

class Stack {
  int top;

public:
  int a[MAX];

  Stack() { top = -1; }
  bool push(int x);
  int pop();
  int peek();
  bool isEmpty();
};

bool Stack::push(int x) {
  if (top >= (MAX - 1)) {
    cout << "Stack Overflow";
    return false;
  } else {
    a[++top] = x;
    cout << x << " pushed into stack\n";
    return true;
  }
}

int Stack::pop() {
  if (top < 0) {
    cout << "Stack Underflow";
    return 0;
  } else {
    int x = a[top--];
    return x;
  }
}

int Stack::peek() {
  if (top < 0) {
    cout << "Stack is Empty";
    return 0;
  } else {
    int x = a[top];
    return x;
  }
}

bool Stack::isEmpty() { return (top < 0); }

// implementing a stack in linked list

class StackNode {
public:
  int data;
  StackNode *next;
};

StackNode *newNode(int data) {
  StackNode *stackNode = new StackNode();
  stackNode->data = data;
  stackNode->next = NULL;
  return stackNode;
}

int isEmpty(StackNode *root) { return !root; }

void push(StackNode **root, int data) {
  StackNode *stackNode = newNode(data);
  stackNode->next = *root;
  *root = stackNode;
  cout << data << " pushed to stack\n";
}

int pop(StackNode **root) {
  if (isEmpty(*root))
    return 0;
  StackNode *temp = *root;
  *root = (*root)->next;
  int popped = temp->data;
  free(temp);

  return popped;
}

int peek(StackNode *root) {
  if (isEmpty(root))
    return 0;
  return root->data;
}

// main

int main() {

  class Stack s;
  cout << "Basic stack operations: " << endl << endl;
  s.push(10);
  s.push(20);
  s.push(30);
  cout << s.pop() << " Popped from stack\n";

  cout << "Top element is : " << s.peek() << endl;
  cout << "Elements present in stack : ";
  while (!s.isEmpty()) {
    cout << s.peek() << " ";
    s.pop();
  }

  cout << endl << endl;
  StackNode *root = NULL;
  cout << "Linked list implementation: " << endl << endl;
  push(&root, 10);
  push(&root, 20);
  push(&root, 30);

  cout << pop(&root) << " popped from stack\n";

  cout << "Top element is " << peek(root) << endl;

  cout << "Elements present in stack : ";
  while (!isEmpty(root)) {
    cout << peek(root) << " ";
    pop(&root);
  }

  return 0;
}
/*
LIFO
Métodos:
empty()
size()
top()
push(g)
pop()
*/
