#include <iostream>
using namespace std;

// Input an array and print it
int main0() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int marks[size];

    for (int i=0; i<size; i++) {
        cout << "Enter the elements: ";
        // space(s), enter(s), tab(s); all are valid
        cin >> marks[i];
    }

    for (int i=0; i<size; i++) {
        cout << marks[i] << " ";
    }
    return 0;
}

// Find the smallest number
int main1() {
    int arr[5] = {12,-34, 8, 64, -31};
    int minVal = INT_MAX;
    for (int i=0; i<5; i++) {
        // if (arr[i] < minVal) minVal = arr[i];
        minVal = min(arr[i], minVal);
    }
    printf("Smallest number in the array: %d\n", minVal);
    return 0;
}

// Find the largest number
int main2() {
    int arr[5] = {12,-34, 8, 64, -31};
    int maxVal = INT_MIN;
    for (int i=0; i<5; i++) {
        // if (arr[i] > maxVal) maxVal = arr[i];
        maxVal = max(arr[i], maxVal);
    }
    printf("Largest number in the array: %d\n", maxVal);
    return 0;
}

// Linear Search - O(n)
int main() {
    int arr[5] = {13, 24, 45, 73, 16};

    int target;
    bool flag=false;
    cout << "Enter the element to be searched: ";
    cin >> target;

    for (int i=0; i<5; i++) {
        if (arr[i] == target) {
            flag = true;
            break;
        }
    }

    if (flag) printf("Element %d is present in the array!\n", target);
    else printf("Element %d is not present in the given array.\n", target);
    return 0;
}
