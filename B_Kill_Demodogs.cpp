#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
const int M = 1e9 + 7;
signed main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        //2022/6=337
//  int X=((n*(n+1)%M*(4*(n)-1)*337%M))%M;
  int X=((n*(n+1))%M*(4*(n)-1)%M*337)%M;
//  cout<<fixed;
    cout<<X;    
        cout<<endl;
    }
}