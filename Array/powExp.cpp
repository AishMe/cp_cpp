#include <iostream>
using namespace std;

// TC: O(N)
double brute_force(double x, int n) {
    double res=1;
    if (n<0) {
        x = 1/x;
        n = -n;
    }
    for (int i=0; i<n; i++) {
        res *= x;
    }
    return res;
}

// Binary Form Method
// TC: O(logN)
double pow(double x,int n) {
    //base cases
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x == -1 && n%2 == 0) return 1.0;
    if(x == -1 && n%2 != 0) return -1.0;

    long binForm = n;
    if(n < 0) {
        x = 1/x;
        binForm = -binForm;
    }

    double res = 1;
    while (binForm > 0) {
        if(binForm%2 == 1) res *= x;
        x *= x;
        binForm /= 2;
    }
    return res;
}

int main() {
    double x;
    int n;
    cout << "Enter the base and exponent: ";
    cin >> x >> n;

    printf("\nBrute Force Result: %lf", brute_force(x,n));
    printf("\nOptimized Result: %lf", pow(x,n));

    cout << endl;
    return 0;
}