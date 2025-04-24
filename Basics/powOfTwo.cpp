# include <iostream>
using namespace std;

bool pow2(int n) {
    return (n && !(n & (n-1)));
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (pow2(n)) printf("%d is power of 2\n", n);
    else printf("%d is not a power of 2\n", n);
    return 0;
}
