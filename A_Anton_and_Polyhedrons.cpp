#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int k=0,l=0,m=0,j=0,i=0;
int sum=0;
while(n--){
    string s;
    cin>>s;
    if(s[0]=='I'){
     k=20;
     l=0,m=0,j=0,i=0;
    }
    else if(s[0]=='C'){
     l=6;
     k=0,m=0,j=0,i=0;
    }
    else if(s[0]=='T'){
     m=4;
     l=0,k=0,j=0,i=0;
    }
    else  if(s[0]=='D'){
     j=12;
     l=0,m=0,k=0,i=0;
    }
   else  if(s[0]=='O'){
     i=8;
     l=0,m=0,j=0,k=0;
    }
  sum=sum+(k+l+m+i+j);
//   cout<<s<<endl;
// cout<<sum<<endl;
}
cout<<sum;










    return 0;
}