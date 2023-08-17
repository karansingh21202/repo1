#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
#define rep(i,k,n) for(int i=k;i<n;i++)
#define  yes cout<<YES
#define  no cout<<NO
void solve(){
int a1,a2;
cin>>a1>>a2;
int b1,b2,c1,c2;
cin>>b1>>b2>>c1>>c2;
int ans(0);
int re(0);
if ((b1 - a1) * (c1 - a1) >= 0) {
ans += min(abs(b1 - a1), abs(c1 - a1));
        }
if ((b2 - a2) * (c2 - a2) >= 0) {
ans += min(abs(b2 - a2), abs(c2 - a2));
        }
 cout << ans +1;
    }



signed main(){
 ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
solve();
        cout<<endl;
    }
    return 0;
}