#include<bits/stdc++.h>
using namespace std;
int main(){
  string k;
  cin>>k;
int ans(0);
int s;
cin>>s;
for(int i=0;i<k.size();i++){
   ans=(ans*10 +k[i]-'0')%s;
}
cout<<ans;











    return 0;
}