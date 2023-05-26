#include<iostream>
using namespace std;

void mat_add(char op) {
    int m, n;

    cout << "Enter Size of Matrix: ";
    cin >> m >> n;
    
    int mat_a[m][n], mat_b[m][n];
    
    cout << "Enter First Matrix: ";
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat_a[i][j];
        }
    }
    
    cout<<"Enter Second Matrix: ";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin >> mat_b[i][j];
        }
    }

    int add[m][n];

    switch(op) {
        case '+':
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                add[i][j] = mat_a[i][j] + mat_b[i][j];
            }
        }
        break;

        case '-':
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                add[i][j] = mat_a[i][j] - mat_b[i][j];
            }
        }
        break;
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }
}
