#include<bits/stdc++.h>
using namespace std;

#define MAX 5
class Queue {
    int arr[MAX];
    int fr, re;
public:
    Queue() {
        fr = -1;
        re = -1;
    }
    void enqueue(int value) {
        if (re == MAX - 1) {
            cout << "Queue Overflow" << value << endl;
            return;
        }
        if (fr == -1) fr = 0;
        arr[++re] = value;
        cout << "Enqueued: " << value << endl;
    }
    void dequeue() {
        if (fr == -1 || fr > re) {
            cout << "Queue Underflow" << endl;
            return;
        }
        cout << "Dequeued: " << arr[fr++] << endl;
        if (fr > re) fr = re = -1;
    }
    void peek() {
        if (fr == -1) {
            cout << "empty!" << endl;
            return;
        }
        cout << "Front element: " << arr[fr] << endl;
    }
    void display() {
        if (fr == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = fr; i <= re; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

// Dynamic 
// struct Node {
//     int data;
//     Node* next;
// };
// class Queue {
//     Node *front, *rear;
// public:
//     Queue() {
//         front = rear = NULL;
//     }
//     void enqueue(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;
        
//         if (rear == NULL) {
//             front = rear = newNode;
//         } else {
//             rear->next = newNode;
//             rear = newNode;
//         }
//         cout << "Enqueued: " << value << endl;
//     }
//     void dequeue() {
//         if (front == NULL) {
//             cout << "Queue Underflow" << endl;
//             return;
//         }
//         Node* temp = front;
//         front = front->next;
//         cout << "Dequeued: " << temp->data << endl;
//         delete temp;

//         if (front == NULL) rear = NULL;
//     }
//     void peek() {
//         if (front == NULL) {
//             cout << "empty" << endl;
//             return;
//         }
//         cout << "Front element:" << front->data << endl;
//     }
//     void display() {
//         if (front == NULL) {
//             cout << "empty!" << endl;
//             return;
//         }
//         Node* temp = front;
//         cout ;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.peek();
    q.display();
    return 0;
}