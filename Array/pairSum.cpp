#include <iostream>
#include <vector>
using namespace std;

// TC: O(n^2)
vector<int> brute_force(vector<int> nums, int n, int target) {
    vector<int> res;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (nums[i] + nums[j] == target) {
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    return res;
}

// TC: O(N)
// Approach: 2 pointers
// Making use of the array being already sorted
vector<int> optimal(vector<int> nums, int n, int target) {
    vector<int> res;
    int i=0, j=n-1;
    while (i<j) {
        if (nums[i] + nums[j] < target) i++;
        else if (nums[i] + nums[j] > target) j--;
        else {
            res.push_back(i);
            res.push_back(j);
            return res;
        }
    }
}

int main() {
    int size, target;
    cout << "||| PAIR SUM |||";
    cout << "Enter a size: ";
    cin >> size;

    vector<int> arr(size);
    cout << "\nEnter the elements: ";
    for (int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "\nEnter the target pair sum: ";
    cin >> target;

    vector<int> ans1 = brute_force(arr, size, target);
    printf("\nBrute force result: %d and %d\n", ans1[0], ans1[1]);

    vector<int> ans2 = optimal(arr, size, target);
    printf("Kadane algo result: %d and %d\n", ans2[0], ans2[1]);
    return 0;
}