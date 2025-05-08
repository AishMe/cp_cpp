// using Kadane's Algorithm: Dynamic Programming
#include <iostream>
using namespace std;

// TC: O(n^2)
int brute_force(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int st=0; st<n; st++) {
        int currSum=0;
        for (int end=st; end<n; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

// TC: O(n)
int kadane_algo(int arr[], int n) {
    int currSum=0, maxSum=INT_MIN;
    for (int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum<0) currSum=0;
    }
    return maxSum;
}


int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int* arr = new int[size];

    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    printf("Brute force result: %d", brute_force(arr, size));
    printf("Kadane algo result: %d", kadane_algo(arr, size));

    return 0;
}
