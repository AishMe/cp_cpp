/*

You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?
Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x_1,x_2,\ldots,x_n: the contents of the array.
Output: Print the minimum number of moves.
Constraints
1 <= n <= 2 x 10^5
1 <= x_i <= 10^9

Example
Input: 5    3 2 5 1 7
Output: 5

*/

#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    
    long long moves = 0;
    int prev = arr[0];
    
    for (int i=1; i<n; ++i) {
        if (arr[i] < prev) {
            moves += prev - arr[i];
        } else {
            prev = arr[i];
        }
    }
    
    cout << moves << "\n";
    return 0;
}