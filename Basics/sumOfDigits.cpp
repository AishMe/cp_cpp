#include <iostream>
using namespace std;

int digit_sum(int n) {
    int sum=0, last=n;
    while (n>0) {
        last = n%10;
        n/=10;
        sum+=last;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << digit_sum(n) << endl;
    return 0;
}