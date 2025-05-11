#include <iostream>
#include <vector>
using namespace std;

// TC: O(N^2)
int brute_force(vector<int>& nums) {
    int n = nums.size();
    for (int val:nums) {
        int freq=0;
        for (int el:nums) {
            if (el == val) {
                freq++;
            }
        }
        if (freq > n/2) return val;
    }
    return -1;
}

int optimized(vector<int>& nums) {
    return 0;
}

int moores_algo(vector<int>& nums) {
    return 0;
}

int main() {

    vector<int> nums;
    int el;
    cout << "Enter elements (end with a 'q'): ";
    while (cin >> el) {
        nums.push_back(el);
    }

    // cout << "Vector elements: ";
    // for (int i = 0; i < nums.size(); ++i) {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;

    printf("\nBrute force result: %d\n", brute_force(nums));
    printf("Optimized approach result: %d\n", optimized(nums));
    printf("Moore's algo result: %d\n", moores_algo(nums));
    return 0;
}