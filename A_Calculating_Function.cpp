#include<bits/stdc++.h>
using namespace std;
int main(){
 long long n,i;
cin>>n;
long long s;
long long sum=0;
for(i=1;i<=n;i++){
    sum=sum+pow(-1,i)*i;
}
cout<<sum;
// new approach
// if(n%2==0){
//     cout<<(n/2);
// }
// else if(n%2!=0){
//     cout<<-(n+1)/2;
// }














    return 0;
}