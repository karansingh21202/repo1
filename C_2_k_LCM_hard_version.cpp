#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
#define rep(i,k,n) for(int i=k;i<n;i++)
void solve(){
 int n,k;
    cin>>n>>k;
    if(n%2!=0){
      cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<1<<" ";
    }
    else{
      if((n/2)%2!=0)cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<n-(n-2)-1<<" ";
      else cout<<n/2<<" "<<n/4<<" "<<n/4<<" ";
      
    }
    int s(k);
    s=s-3;
    while(s--){
        cout<<1<<" ";
    }



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