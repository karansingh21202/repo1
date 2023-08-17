#include <bits/stdc++.h>

#define int long long
using namespace std;
signed main() {
    int a,b,c;
    cin>>a>>b>>c;
    int k=min(a,min(b,c));
    int l=max(a,max(b,c));
    cout<<k<<" "<<l;
    return 0;
}