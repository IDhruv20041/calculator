#include <iostream>
#include "lib/arithematic.cpp"
#include "lib/matrix.cpp"

using namespace std;

int main() {
    char mode;
    int a, b, result;

    cout << "Enter mode: ";
    cin >> mode;

    if (mode == '+' || mode == '-' || mode == '*' || mode == '/') {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;
    }

    switch(mode) {
        case '+':
            result = add(a, b);
            break;

        case '-':
            result = subtract(a, b);
            break;

        case '*':
            result = multiply(a, b);
            break;

        case '/':
            result = divide(a, b);
            break;

        case 'M':
            result = matrix();
            break;

        default:
            result = 0;
            cout << "You have entered invalid mode";
            break;
    }

    if (result != 0) cout << result;
    return 0;
}
