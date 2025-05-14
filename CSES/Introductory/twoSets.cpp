#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    if((n*(n+1)/2)%2 != 0) cout << "NO\n";
    else {
        cout << "YES\n";
        vector<ll> set1, set2;
        if(n%2 == 0) {
            for (int i=0; i<n/2; i++) {
                if(i%2 == 0) {
                    set1.push_back(i+1);
                    set1.push_back(n-i);
                }
                else {
                    set2.push_back(i+1);
                    set2.push_back(n-i);
                }
            }
            cout << n/2 << endl;
            for (ll val : set1) cout << val << " ";
            cout << endl << n/2 << endl;
            for (ll val : set2) cout << val << " ";
        }
        else {
            for (int i=0; i<n/2; i++) {
                if(i%2 == 0) {
                    set1.push_back(i+1);
                    set1.push_back(n-i-1);
                }
                else {
                    set2.push_back(i+1);
                    set2.push_back(n-i-1);
                }
            }
            if(set1.size() < set2.size()) set1.push_back(n);
            else set2.push_back(n);
            
            cout << set1.size() << endl;
            for (ll val : set1) cout << val << " ";
            cout << endl << set2.size() << endl;
            for (ll val : set2) cout << val << " ";
        }
    }
    return 0;
}

int main2() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // using ll a lot of times slows down the program, use it carefully
    int n; cin >> n;
    ll sum = (ll)n*(n+1)/2;

    if(sum%2 != 0) {
        cout << "NO\n";
        return 0;
    }

    sum /= 2;
    vector<ll> set1, set2;
    for(int i=n; i>=1; i--) {
        if(sum >= i) {
            set1.push_back(i);
            sum -= i;
        } else set2.push_back(i);
    }

    cout << "YES\n";
    cout << set1.size() << endl;
    for (auto val : set1) cout << val << " ";
    cout << endl;
    cout << set2.size() << endl;
    for (auto val : set2) cout << val << " ";
    cout << endl;
}