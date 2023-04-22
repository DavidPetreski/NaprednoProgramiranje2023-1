#include <iostream>
#include <cmath>
using namespace std;

class operations {
    //declaring member variables
public:
    int num1, num2;

    //defining member function or methods
public:
    void input() {
        cout << "Enter two numbers to perform operations on: \n";
        cin >> num1 >> num2;
        cout << "\n";
    }

    void addition() {
        cout << "Addition = " << num1 + num2;
        cout << "\n";
    }

    void subtraction() {
        cout << "Subtraction = " << num1 - num2;
        cout << "\n";
    }

    void multiplication() {
        cout << "Multiplication = " << num1 * num2;
        cout << "\n";
    }

    void division() {
        cout << "Division = " << (float) num1 / num2;
        cout << "\n";
    }

    void num1num2() {
        cout << "num1 + num2 = " << num1 + num2;
        cout << "\n";
    }

    
};

//Defining the main method to access the members of the class
int main() {
    cout << " ===== Program to perform basic operations using Class, in CPP ===== \n\n";
    //Declaring class object to access class members from outside the class
    operations op;
    int choice;
    bool done = false;
    while (!done) {
        cout << "\nChoose an operation: \n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. num1num2\n";
        cout << "6. Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                op.input();
                op.addition();
                break;
            case 2:
                op.input();
                op.subtraction();
                break;
            case 3:
                op.input();
                op.multiplication();
                break;
            case 4:
                op.input();
                op.division();
                break;
            case 5:
                op.input();
                op.num1num2();
                break;
            case 6:
                done = true;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    }
    cout << "\nExiting the program\n\n\n";
    return 0;
}
