#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
void solve(){


  int n,k;
  cin>>n>>k;
  vector<int>v;
  int l=n/2;

  int j(1);
  int f=(n+1)/2;
  int g=(n/2);
  if(n>1){
  while(n<=f &&j<=g){
    v.push_back(n);
    v.push_back(j);
    n--;
    j++;
  }
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }

}
else if(n==1){
    cout<<1;
}
}

signed main(){
    int t;cin>>t;
    while(t--){
    solve();
        cout<<endl;
    }
    return 0;
}