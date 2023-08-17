#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
#define rep(i,k,n) for(int i=k;i<n;i++)
#define  yes cout<<YES 
#define  no cout<<NO
void solve(){

  int a, b, x, y, n;
cin >> a >> b >> x >> y >> n;

int da = min(n, a-x);
int db = min(n-da, b-y);
        int ans1 = (a-da)*(b-db);
int db2 = min(n, b-y);
        int da2 = min(n-db2, a-x);
        int ans2 = (a-da2)*(b-db2);

        cout << min(ans1, ans2) ;




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