#include <iostream>
using namespace std;
using ll = long long;

ll solve(ll x, ll y) {
    ll n = max(x,y), ans;

    if (n % 2 == 0) {
        if (y == n) ans = n * n - (x - 1);
        else ans = (n - 1) * (n - 1) + y;
    } 
    else {
        if(x == n) ans = n * n - (y - 1);
        else ans = (n - 1) * (n - 1) + x;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll x,y;
        cin >> y >> x; // ORDER IS VERY IMP!
        cout << solve(x,y) << endl;
    }

    return 0;
}
