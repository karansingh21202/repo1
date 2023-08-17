#include<bits/stdc++.h>
using namespace std;
int main(){
string s,st,k;
int i,j;
cin>>s>>st>>k;
int x=0,y=0;
set<char>n;
set<char>m;
// s.erase(0);
// for(i=0;i<s.size();i++){
// cout<<s[i]<<endl;
// }
// cout<<s.size()<<endl;
// cout<<st.size()<<endl;
// cout<<k.size()<<endl;
if(s.size()+st.size()!=k.size()){
    cout<<"NO";
}
else {
   for(i=0;i<s.size();i++){
   
        for(j=0;j<k.size();j++){
            if(s[i]==k[j]){
               
                x++;
                k.erase(j);
            }
        }
        }
    
    for(y=0;y<st.size();y++){
        for(j=0;j<k.size();j++)
         if(st[y]==k[j]){
                y++;
                x++;
                k.erase(j);
            }
    }
  
    
    if(k.size()==0){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }

}













    return 0;
}