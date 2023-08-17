#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)

void solve(){
    string s;
    cin>>s;
    int n=s.size();

    if(n == 1) {
        cout << "NO";
        return;
    }

    char a=s[0];
    char b=s[n-1];

    stack<char>st;
    stack<char>st2;

    bool flag=1 ,cab(1),cab2(1);
    int x(0),y(0);
    if(a==b){
        cout<<"NO";
    }
    else{
        loop(i,n){
            if(s[i]==a){
                st.push(s[i]);
            }
            else if(s[i]==b && !st.empty()){
                st.pop();
            }
            else if(s[i]==b && st.empty()){
                 cab=0;
                 break;
            }
            else if(s[i]!=a&&s[i]!=b){
                st.push(s[i]);
            }
        }

        if(st.empty()){
            x++;
        }

        loop(i,n){
            if(s[i]==a){
                st2.push(s[i]);
            }
            else if(s[i]==b && !st2.empty()){
                st2.pop();
            }
            else if(s[i]==b && st2.empty()){
                 cab2=0;
                 break;
            }
            else if(s[i]!=a&&s[i]!=b && !st2.empty()){
                st2.pop();
            }
            else if(s[i]!=a&&s[i]!=b && st2.empty()){
                cab2=0;
                 break;
            }
        }

        if(st2.empty()){
            y++;
        }

        if((x>0&&cab==1)||(y>0&&cab2==1)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}     
