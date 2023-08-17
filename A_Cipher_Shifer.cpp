#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
#define rep(i,k,n) for(int i=k;i<n;i++)
#define  yes cout<<YES
#define  no cout<<NO
void solve(){
   int n;
        cin >> n;

        string s;
        cin >> s;

        string dec = "";
        int i (0);
        int j (0);

        while (i < n) {
            j = i + 1;

            while (j < n) {
                if (s[i] == s[j]) {
                    dec += s[i];
                    i = j + 1;
                    break;
                } else {
                    j++;
                }
            }

            if (j == n) {
                i++;
            }
        }

        cout << dec;
    
    
    
}
signed main(){
 ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
solve();
        cout<<endl;
    }
    return 0;
}