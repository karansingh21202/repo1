#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
#define rep(i,k,n) for(int i=k;i<n;i++)
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
typedef vector<int> vi;
typedef pair<int, int> pii;
#define yes cout << "YES" 
#define no cout << "NO" 

void solve() {
    vi v(3);
    loop(i, 3) cin >> v[i];
    sort(v.begin(), v.end());
    bool ok = true;
    loop(i, 2) {
        if (v[i] != v[i + 1]) {
            ok = false;
        }
    }
    if (ok) {
        yes;
    } else {
        if (v[0] == v[1]) {
            int cnt(3);
            bool kk=false;
            while(cnt--){
            v[2] = v[2] - v[0];
           if(v[2]==v[1]){
            break;
            kk=true;
           }
            }
            if(kk) yes;
            else {
                if(v[2]==v[1]){
                    yes;
                }
                else no;
            }
             
            
        } else if (v[1] == v[2]) {
            v[1] -= v[0];
            v[2] -= v[0];
            set<int> s2;
            s2.insert(v[0]);
            s2.insert(v[1]);
            s2.insert(v[2]);
            if (s2.size() == 1) {
                yes;
            } else {
                no;
            }
        } else {
            v[1] -= v[0];
            v[2] -= 2 * v[0];
            set<int> s3;
            s3.insert(v[0]);
            s3.insert(v[1]);
            s3.insert(v[2]);
            if (s3.size() == 1) {
                yes;
            } else {
                no;
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
