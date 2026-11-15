#include <iostream>
using namespace std;

#define SIZE 5

int q[SIZE], front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % SIZE == front)
        cout << "Queue Overflow\n";
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        q[rear] = x;
    }
}

void dequeue() {
    if (front == -1)
        cout << "Queue Underflow\n";
    else {
        cout << "Deleted: " << q[front] << endl;
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty";
        return;
    }

    int i = front;
    while (true) {
        cout << q[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    cout << "\nAfter deletion: ";
    display();
    return 0;
}
