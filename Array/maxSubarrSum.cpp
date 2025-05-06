// using Kadane's Algorithm
#include <iostream>
using namespace std;

// TC: O(n^2)
int brute_force(int arr, int n) {
    int sum=0;
    for (int st=0; st<n; st++) {
        for (int end=st; end<n; end++) {
            sum += end;
        }
    }
    return sum;
}

// TC: O(n)
int kadane_algo(int arr, int n) {
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

    printf("Brute force result: %d", brute_force(*arr, size));
    printf("Kadane algo result: %d", kadane_algo(*arr, size));

    return 0;
}
