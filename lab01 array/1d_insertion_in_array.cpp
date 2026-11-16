#include <iostream>
using namespace std;

int main()
{
    int a[10] = {10, 20, 30, 40};
    int n = 4, pos, value;

    cout << "Enter position: ";
    cin >> pos;

    cout << "Enter value: ";
    cin >> value;

    for(int i = n; i >= pos; i--)
    {
        a[i] = a[i-1];
    }

    a[pos-1] = value;
    n++;

    cout << "Array after insertion: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
