#include <iostream>
using namespace std;

// Using 2 pointers method
void revArr(int arr[], int size) {
    int start=0, end=size-1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++; end--;
    }
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter the elements: ";
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    revArr(arr, size);
    printf("Reversed array: ");
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}