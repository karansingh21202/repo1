#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
void solve(){


    string s="codeforces";
    char c;
    cin>>c;
    int x(0);
    loop(i,s.size()){
        if(s[i]==c){
    x++;
        }
    }

    if(x>0){
        cout<<"YES";
    }
    else{
        cout<<" NO";
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