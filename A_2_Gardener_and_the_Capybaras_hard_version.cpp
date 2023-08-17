#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
void solve(){


    string s;
    cin>>s;
    int n=s.size();
  if(s[0]==s[1]&&s[0]>=s[n-1]){
    cout<<s[0]<<" ";
    for(int i=1;i<s.size()-1;i++){
        cout<<s[i];
    }
    cout<<" ";

cout<<s[n-1];



  }
 else if(s[0]==s[1] &&s[0]<s[n-1]   ){
    for(int i=0;i<n-2;i++){
        cout<<s[i];
    }
    cout<<" ";
    cout<<s[n-2]<<" ";
    cout<<s[n-1];



  }
  else if(s[1]>s[0]){
    cout<<s[0]<<" ";
    for(int i=1;i<n-1;i++){
        cout<<s[i];

    }
    cout<<" ";
    cout<<s[n-1];
  }
  else if(s[0]>s[1]){
    cout<<s[0];
    cout<<" ";
    cout<<s[1]<<" ";
    for(int i=2;i<=n-1;i++){
        cout<<s[i];
    }
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