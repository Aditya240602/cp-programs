#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() { top = NULL; }
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Pushed: " << value << endl;
    }
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        Node* temp = top;
        cout << "Popped: " << top->data << endl;
        top = top->next;
        delete temp;
    }
    void peek() {
        if (top == NULL) {
            cout << "empty!" << endl;
            return;
        }
        cout << "Top element: " << top->data << endl;
    }
    void display() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        cout << "elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
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