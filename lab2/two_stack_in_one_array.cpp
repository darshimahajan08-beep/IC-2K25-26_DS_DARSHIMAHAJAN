#include <iostream>
using namespace std;

int a[10], top1 = -1, top2 = 10;

void push1(int x) {
    if (top1 + 1 == top2) cout << "Overflow\n";
    else a[++top1] = x;
}

void push2(int x) {
    if (top1 + 1 == top2) cout << "Overflow\n";
    else a[--top2] = x;
}

void pop1() {
    if (top1 == -1) cout << "Stack 1 Underflow\n";
    else cout << a[top1--] << endl;
}

void pop2() {
    if (top2 == 10) cout << "Stack 2 Underflow\n";
    else cout << a[top2++] << endl;
}

int main() {
    push1(10);
    push1(20);
    push2(50);
    push2(60);

    pop1();
    pop2();

    return 0;
}
