#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;cin>>t;
    while(t--){
        int n;
      cin>>n;
      if(n%2==0){
        cout<<(n/2)-1<<endl;
      }  
      else if(n%2!=0){
        cout<<(n/2)<<endl;
      }
      
    }
    return 0;
}