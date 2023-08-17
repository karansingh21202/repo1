#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
#define rep(i,k,n) for(int i=k;i<n;i++)
#define  yes cout<<YES
#define  no cout<<NO
void solve(){
int n;
cin>>n;
string s;
cin>>s;
int m(1),ans(1);
loop(i,n-1){
   if(s[i]!=s[i+1]){
    m=1;
   }
   else{
    m++;
   }
   ans=max(ans,m);
}
cout<<ans+1;





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