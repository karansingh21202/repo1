#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
int k;
k=(2*n);
int a[1000001];
int l;
int x=0,cn=0;
for(i=0;i<k;i++){
    cin>>l;
    a[l]++;
    if(a[l]==1){
        cn++;
    }
    if(a[l]==2){
        cn--;
    }
    x=max(x,cn);
}




cout<<x;















    return 0;
}