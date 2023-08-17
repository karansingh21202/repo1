
#include <bits/stdc++.h>
using namespace std;

  int main(){
      int t;
      cin>>t;
      while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int flag=0;
      string x="";
      int sum=0;
      if(s[0]=='1')
      sum+=1;
      for(int i=1; i<n; i++){
          if(s[i]=='1'){
              if(sum==0){
                  sum+=1;
                  x+='+';
              }
              else{
                  sum-=1;
                  x+='-';
              }
          }
          else{
              x+='+';
          }
      }
      cout<<x<<endl;
      }
      return 0;
  }