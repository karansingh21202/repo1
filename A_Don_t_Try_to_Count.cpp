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
int n, m;
cin >> n >> m;
string x, s;
cin >> x >> s;
int cnt = 0;
bool ok=false;
if (s==x) 
{
    cout<<cnt;
    return;
}
while (n<m)
{
    x+=x;
    n*=2;
    cnt++;
}

while (n<54) { 

    if (x.find(s) != string::npos) {
        ok=true;
        break;
    } 
    cnt++;
    x += x; 
    // cout<<x;
    n*=2;   
}
if(ok) cout <<cnt;

else cout << -1;

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