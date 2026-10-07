#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == key) {
                cout << "Element found at row "
                     << i << " and column " << j;
                found = true;
            }
        }
    }

    if(!found) {
        cout << "Element not found";
    }

    return 0;
}
