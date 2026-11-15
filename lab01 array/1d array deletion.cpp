#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int pos = 2;

    for (int i = pos; i < 4; i++) {
        a[i] = a[i + 1];
    }

    cout << "Array after deletion: ";

    for (int i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
