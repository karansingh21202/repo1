#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int n;
cin>>n;
int k(n);
int sum=n*(n+1)/2;
if(sum%2==1)cout<<"NO";
else {cout<<"YES"<<endl;
int target=(sum/2);
// cout<<target<<endl;
vector<int>v,b;
int f(0),s(0);
bool ok=false;
bool ok2=false;
vector<int>vis(n+4,0);
while(f<target){
   
    f+=n;
    if(f<target){
         v.push_back(n);
          vis[n]++;
    n--;

    }
    else{
        ok=true;
       
    }
   
}
// cout<<f<<endl;
// cout<<target-(f-n);
if(ok)
v.push_back(target-(f-n));
cout<<v.size()<<endl;
for(auto i:v) cout<<i<<' ';
cout<<endl;

vis[target-(f-n)]++;
// cout<<vis[target-(f-n)];
// for (auto i:vis){
//     // cout<<i<<' ';
// }
// cout<<"kkk"<<k<<endl;
// cout<<vis[k]<<endl;
while(s<target){
    // cout<<s<<endl;
    if(vis[k]==0){
          s+=k;
          if(s<target){
    b.push_back(k);
  
    
          }
          else{
            ok2=true;
          }
    }
  
    k--;
    // cout<<s<<"s"<<endl;

}
// cout<<s<<endl;
if(ok2)
b.push_back(target-(s-k-1));

cout<<b.size()<<endl;
for(auto it:b)cout<<it<<" ";



}










    return 0;
}