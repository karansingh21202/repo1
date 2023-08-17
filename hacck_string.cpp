#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,k=0;
cin>>n;
while(n--){
    int d;
    cin>>d;
    string s;
    cin>>s;
    for(i=0;i<d;i++){
        if(s[i]=='0' || s[i]=='5'){
        k++;}
    }
if(k>0){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
}







    return 0;
}