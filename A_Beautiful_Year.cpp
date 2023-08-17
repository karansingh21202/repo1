#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n++){
    string s;
    s=to_string(n);
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
           if(s[i]!=s[j])        {
        break;
           }
     
    }
}
}
cout<<n;





    return 0;
}