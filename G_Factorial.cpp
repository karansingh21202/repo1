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
void solve(){
int n;
cin>>n;
if(n==0||n==1)cout<<1;
else{
    int fac(1);
while(n>0){
fac*=n;
n--;

}
cout<<fac;


}




}
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}