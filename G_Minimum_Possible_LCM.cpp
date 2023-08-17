#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,n) for(int i=0;i<n;i++)
signed main(){
   
        int n;cin>>n;
        int a[n],b[n];
        int m(0),k,l;
        vector<pair<int ,int>>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
            v.push_back({a[i],i});
    //   m=a[0]; 
    //   if(m>a[i]){
    //     m=a[i];
    //     k=i;
    
        
    
        }
        sort(v.begin(),v.end());
        loop(i,n){
            if(v[i].first==2*v[0].first){
              m++;
              k=i;
              break;

            }
        }
        if(m>0){
         cout<<v[0].second +1<<" "<<v[k].second +1;
        }
        //    if(v[0].second > v[1].second){
        //          cout<<v[1].second +1<<" "<<v[0].second +1;
        //     }
         
        else{
            if(v[0].second > v[1].second){
                 cout<<v[1].second +1<<" "<<v[0].second +1;
            }
            else if(v[0].second < v[1].second){
        cout<<v[0].second +1<<" "<<v[1].second +1;
            }
        }
     
    //   sort(b,b+n);
    //   loop(i,n){
    //     cout<<b[i]<<" ";
    //   }
    //   loop(i,n){
    //     if(a[i]==b[0]){
    //         l=i;
    //         break;
          
    //     }
    //      if(a[i]==b[1]){
    //         k=i;
    //         break;
    //     }
    //   }
       
        
      
    
    return 0;
}