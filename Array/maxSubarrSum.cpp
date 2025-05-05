// using Kadane's Algorithm
#include <iostream>
using namespace std;

// TC: O(n^2)
int brute_force(int n) {
    return 0;
}

// TC: O(n)
int kadane_algo(int n) {
    return 0;
}


int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int* arr = new int[size];

    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    printf("Brute force result: %d", brute_force(*arr));
    printf("Kadane algo result: %d", kadane_algo(*arr));

    return 0;
}
