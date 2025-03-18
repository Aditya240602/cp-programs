#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class Deque {
    Node* front;
    Node* rear;

public:
    Deque() {
        front = rear = NULL;
    }
    void insertFront(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = front;
        newNode->prev = NULL;

        if (front == NULL) {
            front = rear = newNode;
        } else {
            front->prev = newNode;
            front = newNode;
        }
        cout << "Inserted at Front: " << value << endl;
    }
    void insertRear(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = rear;

        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Inserted at Rear: " << value << endl;
    }

    // Delete from front
    void deleteFront() {
        if (front == NULL) {
            cout << "Deque Underflow! Cannot delete from front." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;

        if (front == NULL) rear = NULL; // If deque is empty
        else front->prev = NULL;

        cout << "Deleted from Front: " << temp->data << endl;
        delete temp;
    }

    // Delete from rear
    void deleteRear() {
        if (rear == NULL) {
            cout << "Deque Underflow! Cannot delete from rear." << endl;
            return;
        }
        Node* temp = rear;
        rear = rear->prev;

        if (rear == NULL) front = NULL; // If deque is empty
        else rear->next = NULL;

        cout << "Deleted from Rear: " << temp->data << endl;
        delete temp;
    }
    void display() {
        if (front == NULL) {
            cout << "Deque is empty!" << endl;
            return;
        }
        Node* temp = front;
        cout << "Deque elements: ";
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main() {
    Deque dq;
    dq.insertFront(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertRear(30);
    dq.display();
    
    dq.deleteFront();
    dq.deleteRear();
    dq.display();
    
    return 0;
}