#include<iostream>
using namespace std;

void mat_product()
{
    cout<<"Size of 1st Matrix: ";
    int m1,n1;
    cin>>m1>>n1;
    int a[m1][n1];
    cout<<"Elements of First Matrix: ";
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Size of 2nd Matrix: ";
    int m2,n2;
    cin>>m2>>n2;
    cout<<"Elements of Second Matrix: ";
    int b[m2][n2];
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            cin>>b[i][j];
        }
    }

    if(n1!=m2){
        cout<<"Multiplication not Possible";
    }
    else
    {
        int m[m1][n2];
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                m[i][j]=0;
            }
        }
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                for(int k=0;k<n1;k++){
                    m[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}