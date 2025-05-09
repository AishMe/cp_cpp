#include <iostream>
#include <vector>
using namespace std;

// TC: O(n^2)
vector<int> brute_force(vector<int> nums, int n, int target) {
    vector<int> res;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<i; j++) {
            if (nums[i] + nums[j] == target) {
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    return res;
}

vector<int> optimal(vector<int> arr, int n, int target) {
    vector<int> res;
    return res;
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