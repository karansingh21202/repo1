#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
#define rep(i,k,n) for(int i=k;i<n;i++)
void solve(){
int n;
cin>>n;
vector<int>v(n);
loop(i,n){
    cin>>v[i];
}
int x(0);
loop(i,n){
    if(v[i]<=(i+1)){
        x++;
        break;
    }
}
if(x>0){
    cout<<"yes";
}
else{
    cout<<"no";
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