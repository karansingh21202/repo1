#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j,k;
cin>>n;
cin>>k;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
int ma=0;
for(i=0;i<n;i++){
    for(i=0;i<k;i++){
        ma=max(ma,a[i]);
    }
    cout<<ma<<" ";
}









    return 0;
}

