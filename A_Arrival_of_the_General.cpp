#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j,x,l(0),s,t;
cin>>n;

int a[n];
for(i=0;i<n;i++){
  cin>>a[i];
}


x=a[0];
for(i=0;i<n;i++){
//   x=min(x,a[i]);
//    l=max(l,a[i]);
  if(x>=a[i]){
    x=a[i];
    j=i;
  }
  if(l<a[i]){
    l=a[i];
    s=i;
  }
 
}
if(s>j){
    j++;
}
cout<<s-j+(n-1);















    return 0;
}

