#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string k,g,f;
cin>>k;
string t="";
int l=s.size(),i,j,x(0),y(0);
int m=k.size();
set<char>st,h;
for(i=0;i<l;i++){
    st.insert(s[i]);
}
for(i=0;i<m;i++){
   h.insert(k[i]);
}
if(m!=l){
    cout<<"NO";
}
 else if(st.size()!=h.size())
{
    cout<<"NO";
}
else{
    if(l&&m==2){
        sort(s.begin(),s.end());
        sort(k.begin(),k.end());
        if(k==s){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    }
    else{
        if(st==h){
    for(i=0;i<l;i++){
    
            if(s[i]!=k[i]){
                x++;
            }
            else if(s[i]==k[i]){
                y++;
            }
            
        
        
    }

    if(x==2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
    else{
        cout<<"NO";
    }
    
}













}




    return 0;
}