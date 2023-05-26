#include <iostream>
using namespace std;

template <size_t N>
void determinant(int (&arr)[N][N], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int matrix()
{
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;
    int arr[100][100];

    cout << "Enter matrix (comma seperated): ";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    
    determinant(arr, n);

    return 0;
}
