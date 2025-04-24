#include <iostream>
using namespace std;

bool prime(int n) {
    for (int i=2; i*i<=n-1; i++){
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << prime(n);
    return 0;
}

