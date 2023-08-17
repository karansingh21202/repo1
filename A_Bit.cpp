#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;cin>>t;
    int x=0;
    while(t--){
      string a ;
      
      cin>>a;
      if(a[1]==('+')){
        x+=1;
        
      }  
      else if(a[1]==('-')){
        x=x-1;
      }
    }
    cout<<x;
    return 0;
}