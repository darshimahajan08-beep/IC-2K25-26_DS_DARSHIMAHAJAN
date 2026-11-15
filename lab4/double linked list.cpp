#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
};

Node *head = NULL;

void insert(int x) {
    Node *newNode = new Node;
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

void display() {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    cout << "Doubly Linked List: ";
    display();

    return 0;
}
