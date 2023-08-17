#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
int k;
k=(2*n);
int a[k];
for(i=0;i<k;i++){
    cin>>a[i];
}
int x=0;
for(i=0;i<k;i++){
    for(j=i+1;j<k;j++){
        if(a[i]==a[j]){
            x++;
        }
    }
}
cout<<x;















    return 0;
}