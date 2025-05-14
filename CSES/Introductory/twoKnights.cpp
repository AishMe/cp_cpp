#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    for (ll i=1; i<n+1; i++) {
        ll total_comb = ((i*i)*((i*i) - 1)) / 2;
        ll attack = 4*(i-1)*(i-2); // horse moves in L shape
        cout << total_comb - attack << endl;
    }
    return 0;
}

// solving the equation
int main2() {
    ll n; cin >> n;
    for (ll i=1; i<=n; i++) cout << (i*i*i*i - 9*i*i + 24*i - 16) / 2 << endl;
}
