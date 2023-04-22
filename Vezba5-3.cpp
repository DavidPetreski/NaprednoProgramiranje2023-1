#include <iostream>
using namespace std;

void printNameAscii() {
    cout << "ASCII kod za ime i prezime:\n";
    cout << "------------------------\n";
    cout << "Ime: 68 97 109 106 97 110\n";
    cout << "Prezime:  77 117 114 103 106 101 115 107 105\n";
    cout << "------------------------\n\n";
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int calculate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    printNameAscii();
    int a = 68, b = 77;
    int (*op)(int, int);
    op = &add;
    int sum = calculate(a, b, op);
    cout << "Zbirot na " << a << " and " << b << " e " << sum << endl;
    op = &subtract;
    int diff = calculate(a, b, op);
    cout << "Razlika pomegju " << a << " and " << b << " e " << diff << endl;
    op = &multiply;
    int product = calculate(a, b, op);
    cout << "Proizvod od " << a << " and " << b << " e " << product << endl;
    op = &divide;
    int quotient = calculate(a, b, op);
    cout << "Kolicnik na " << a << " and " << b << " e " << quotient << endl;
    op = &power;
    int pow = calculate(a, b, op);
    cout << a << " stepenuvano na " << b << " e " << pow << endl;
    return 0;
}
