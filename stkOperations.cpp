#include <bits/stdc++.h>
using namespace std;

#define MAX 5 

class Stack {
    int top; 
    int arr[MAX];

public:
    Stack() { top = -1; } 
    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! "<< "\n";
            return;
        }
        arr[++top] = value;
        cout << "Pushed: " << value << endl;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow." << "\n";
            return;
        }
        cout << "Popped: " << arr[top--] << "\n";
    }
    void peek() {
        if (top == -1) {
            cout << "empty" << "\n";
            return;
        }
        cout << "Top: " << arr[top] <<"\n";
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << "\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.peek();
    s.display();
    return 0;
}