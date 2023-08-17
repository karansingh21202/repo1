#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n),mx(n+1,0);
    unordered_map<int, int> freq; // To store the frequency of each hop length

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] <= n) {
            freq[v[i]]++;
        }
    }

    int ans = 0;
   for(int i = 1; i <= n; ++i) {
        for(int j = i; j <= n; j += i) mx[j] += freq[i];
    }
    cout << *max_element(mx.begin(),mx.end()) ;
} 

    // cout << ans ;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }
    return 0;
}
