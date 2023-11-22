#include<bits/stdc++.h>
using namespace std;
#define int long long
#define M 1000000007
signed main(){
    int n;
    cin>>n;
    int ans(1);
    int a(2);
    if(n==0){
      cout<<1;
      return 0;
      
    }
    while(n>0){
    if((n&1)==1){
ans=(ans*(a%M))%M;
    }
    a=((a%M)*(a%M))%M;
    n=n>>1;
    }
 cout<<ans;
    return 0;
}