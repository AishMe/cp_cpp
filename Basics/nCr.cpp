#include <iostream>
using namespace std;

int factorial(int n) {
    int fact=1;
    for (int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r, nCr;
    cin >> n >> r;
    nCr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%dC%d = %d", n, r, nCr);
    return 0;
}