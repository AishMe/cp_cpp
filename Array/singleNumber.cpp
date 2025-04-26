// Leetcode: https://leetcode.com/problems/single-number/
#include <iostream>
#include <vector>
using namespace std;

// &nums -> pass by reference
int singleNumber(vector<int> &nums) {
    int ans=0;

    for (int val : nums) {
        ans ^= val;
    }
    return ans;
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    
    vector<int> nums(size, 0);
    cout << "\nEnter an array: ";
    for (int i=0; i<size; i++) {
        cin >> nums[i];
    }

    printf("Result: %d", singleNumber(nums));
    return 0;
}