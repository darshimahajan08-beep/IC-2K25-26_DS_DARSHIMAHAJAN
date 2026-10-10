#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], r, c, ch;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix A:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++) cin >> a[i][j];

    do {
        cout << "\n1.Addition\n2.Multiplication";
        cout << "\n3.Transpose\n4.Determinant\n5.Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        if(ch==1 || ch==2) {
            cout << "Enter matrix B:\n";
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++) cin >> b[i][j];
        }

        switch(ch) {
            case 1:
                for(int i=0;i<r;i++) {
                    for(int j=0;j<c;j++)
                        cout << a[i][j]+b[i][j] << " ";
                    cout << endl;
                }
                break;

            case 2:
                if(r!=c) {
                    cout << "Multiplication requires compatible dimensions.\n";
                    break;
                }
                for(int i=0;i<r;i++) {
                    for(int j=0;j<c;j++) {
                        int sum=0;
                        for(int k=0;k<c;k++)
                            sum+=a[i][k]*b[k][j];
                        cout << sum << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                for(int j=0;j<c;j++) {
                    for(int i=0;i<r;i++)
                        cout << a[i][j] << " ";
                    cout << endl;
                }
                break;

            case 4:
                if(r==2 && c==2)
                    cout << "Determinant = "
                         << a[0][0]*a[1][1]-a[0][1]*a[1][0];
                else
                    cout << "Enter a 2x2 matrix for determinant.";
                cout << endl;
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }
    } while(ch!=5);

    return 0;
}
