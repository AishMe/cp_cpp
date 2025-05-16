/*

You are given all numbers between 1,2,\ldots,n except one. 
Your task is to find the missing number.

Input: The first input line contains an integer n. The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output: Print the missing number.
Constraints: 2 <= n <= 2 x 10^5

Example
Input:
5
2 3 1 5

Output:
4

*/

#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    
    long long expected_sum = n * (n+1) / 2;
    long long actual_sum = 0;
    
    for (int i=0; i < n-1; ++i) {
        int num;
        cin >> num;
        actual_sum += num;
    }
    
    cout << expected_sum - actual_sum;
    return 0;
}
