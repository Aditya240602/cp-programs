#include<bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int &s, int element, int posn) {
    if (posn < 0 || posn > s) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = s; i > posn; i--) {
        arr[i] = arr[i - 1];
    }

    arr[posn] = element; 
    s++;
}
void deleteElement(int arr[], int &size, int posn) {
    if (posn < 0 || posn >= size) {
        cout << "invalid \n";
        return;
    }
    for (int i = posn; i < size - 1; i++)arr[i] = arr[i + 1];
    size--; 
}
int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element)return i;  
    }
    return -1;
}
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++)cout << arr[i] << " ";
    cout <<"\n";
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array
    int size = 5;

    cout << "orig Arr: ";
    displayArray(arr, size);

    insertElement(arr, size, 10, 2);
    cout << "new Arr: ";
    displayArray(arr, size);

    deleteElement(arr, size, 3);
    cout << "After Deletion: ";
    displayArray(arr, size);

    int element = 10;
    int index = searchElement(arr, size, element);
    if (index != -1)
        cout << index << "\n";
    else
        cout <<" not found!" << "\n";
    return 0;
}