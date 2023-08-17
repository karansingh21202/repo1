#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
#define rep(i,k,n) for(int i=k;i<n;i++)

signed main() {
    int n, m;
    cin >> n >> m;

    int A[n], B[m], C[m];
    loop(i,n) cin >> A[i];
    loop(i,m) cin >> B[i];
    loop(i,m) cin >> C[i];

   int res(0);
    loop(i,n) {
        double mi = 1e18;
        for(int j=0; j<m; j++) {
            double val = ceil((double)A[i] / B[j]) * C[j];
            if(val < mi) mi = val;
        }
        res += (int)mi;
    }
    cout << res << endl;
    return 0;
}
