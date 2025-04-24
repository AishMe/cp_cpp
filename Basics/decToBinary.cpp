#include <iostream>
using namespace std;

int dec_to_binary(int n) {
    int ans=0, pow=1;
    while(n>0) {
        int rem = n % 2;
        n /= 2;

        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int binary_to_dec(int n) {
    int ans=0, pow=1;
    while(n>0) {
        int rem = n % 10;
        n /= 10;
        ans += rem * pow;
        pow *= 2;
    }
    return ans;
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;

    // printf("Decimal: %d || Binary: %d\n", n, dec_to_binary(n));
    printf("Binary: %d || Decimal: %d\n", n, binary_to_dec(n));
    return 0;
}