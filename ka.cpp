#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
signed main(){
    int t;cin>>t;
    
    while(t--){
        int s(0),x(0);
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n ,greater<int>());
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b,b+m,greater<int>());
        if(m>=n){
            for(int i=0;i<n;i++){
                x+=b[i];
            }
        }
        else if(n>m){
            for(int i=0;i<m;i++){
             x+=b[i];
            }
            for(int i=0;i<(n-m);i++){
                x+=a[i];
            }
        }
        cout<<x;
        cout<<endl;
    }
    return 0;
}