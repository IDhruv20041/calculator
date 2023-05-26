#include<iostream>
#include"mat_add.cpp"
#include"mat_product.cpp"
using namespace std;

int main()
{
    char op;
    cout<< "Enter Operation to Perform on Matrix: ";
    cin>> op;

    if( op == '+'|| op == '-'){
        mat_add(op);
    }
    else if( op == '*'){
        mat_product();
    }
    else{
        cout<< "ERROR";
    }

 return 0;   
}