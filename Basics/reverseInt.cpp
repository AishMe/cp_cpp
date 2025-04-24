#include <iostream>
using namespace std;

int rev(int n) {
    int res=0;
    while (n>0) {
        int rem = n%10;
        n/=10;
        res = res*10 + rem;
    }
    return res;
}

int main() {
    int n;
    cout << "Enter a number: "; 
    cin >> n;

    printf("Original: %d || Reverse: %d\n", n, rev(n));
    return 0;
}
