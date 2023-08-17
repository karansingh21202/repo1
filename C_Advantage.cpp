#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;cin>>t;
    while(t--){
        int n,i,m=0;
        cin>>n;
        int a[n];
        int arr[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            arr[i]=a[i];}
            sort(arr,arr+n);
            m=arr[n-1];
            int s;
            s=arr[n-2];
  
    //   else if(s==0){
    //     s=a[0];
    //   }
   
 
//    cout<<cnt;

         
           
            for(int i=0;i<n;i++){
                  if(a[i]!=m){
                cout<<a[i]-m<<" ";
            }
            else if(a[i]==m ){
                
                cout<<m-s<<" ";

            }
           
            // else if(a[i]==m &&a[i]==a[i+1]){
            //     cout<<m-a[i]<<" ";
            // }
            }
              cout<<endl;
            }
        
        

        
    
    return 0;
}