#include <iostream>
using namespace std;

class stack {
    int a[5]; // Array to store stack elements
    int top;  // Index of the top element (initialized to -1)

public:
    stack() { top = -1; } // Constructor to initialize top to -1

    void push() {
        int data;
        if (top == 4) {
            cout << "\nStack is full\n";
        } else {
            cout << "Enter element: ";
            cin >> data;
            top++;
            a[top] = data;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Popped element: " << a[top] << "\n";
            top--;
        }
    }

    void display() {
        if (top >= 0) {
            cout << "Elements:\n";
            for (int i = top; i >= 0; i--) {
                cout << a[i] << "\n";
            }
        } else {
            cout << "Stack is empty\n";
        }
    }
};

int main() {
    stack s;
    int choice;

    while (true) {
        cout << "\n1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}