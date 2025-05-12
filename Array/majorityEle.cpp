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

// TC: O(nlogn) for sorting and O(n) for approach -> total= O(nlogn)
int optimized(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int freq=1, ans=nums[0];
    for (int i=1; i<n; i++) {
        if (nums[i] == nums[i-1]) freq++;
        else {
            freq=1;
            ans = nums[i];
        }

        if (freq > n/2) return ans;
    }
    return -1;
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