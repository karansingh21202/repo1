#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
#define rep(i,k,n) for(int i=k;i<n;i++)
void solve(){
int n;    
cin>>n;
vector<int>v(n);
       loop(i,n) {
        cin>>v[i];
       }
sort(v.begin(),v.end());
 int sum(1);
if(v[0] != 1){cout<<"NO"; 
         return ;
         }
rep(i,1,n){
        if((v[i]) <= sum) {
            sum += (v[i]);
            continue;
              }
            else {
                cout<<"NO";
                  return ;}
          }

          

          cout<<"YES";


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