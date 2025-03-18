#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};

class SinglyLL {
    Node* head;

public:
    SinglyLL() { head = NULL; }
    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
        cout << "Inserted: " << value << endl;
    }
    void remove(int value) {
        if (head == NULL) {
            cout << "empty!" << endl;
            return;
        }
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << value << endl;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL && temp->next->data != value)
            temp = temp->next;
        if (temp->next == NULL) {
            cout << "Not Found" << endl;
            return;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
        cout << "Deleted: " << value << endl;
    }
    void display() {
        Node* temp = head;
        if (!temp) {
            cout << "empty!" << endl;
            return;
        }
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main() {
    SinglyLL list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    list.remove(20);
    list.display();
    return 0;
}