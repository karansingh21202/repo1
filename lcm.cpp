#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<std::lcm(n,k);
        cout<<endl;
    }
    return 0;
}