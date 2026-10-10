#include <iostream>
using namespace std;

int s[5], top = -1;

void push(int x) {
    if (top == 4) cout << "Overflow\n";
    else s[++top] = x;
}

void pop() {
    if (top == -1) cout << "Underflow\n";
    else cout << "Deleted: " << s[top--] << endl;
}

void display() {
    for (int i = top; i >= 0; i--)
        cout << s[i] << " ";
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}
