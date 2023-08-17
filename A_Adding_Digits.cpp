#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)


void solve(){
        int a, b, n;
    cin >> a >> b >> n;
    bool flag(false);
  loop(i,10){
        if ((a * 10 + i) % b == 0)
        {
            cout << a * 10 + i;
            string s(n - 1, '0');
            cout << s << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << -1 << endl;
    }
}
signed main(){
solve();
    return 0;

}