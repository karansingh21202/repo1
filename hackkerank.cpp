#include<bits/stdc++.h>
using namespace std;
int main(){
 int s,t;
 cin>>s>>t;
    // cout<<s<<" "<<t<<endl;
    int m,n;
    cin>>m>>n;
    // cout<<m<<" "<<n<<endl;
    int i,a,b;
    cin>>a>>b;
    int h[a],k[b];
    for(i=0;i<a;i++){
        cin>>h[i];
    }
     for(i=0;i<b;i++){
        cin>>k[i];
    }
    int c=0;
    for(i=0;i<a;i++){
        if((h[i]+m)>=s && (h[i]+m)<=t ){
            c++;    
        }
    
    }
    c++;
    int d=0;
    for(i=0;i<b;i++){
        if((k[i]+n)>=s && (k[i]+n)<=t ){
        d++;
        }    
    }
    d++;
    cout<<c<<endl;
    cout<<d<<endl;
    
    
    
    
    
    
    
    
    return 0;
}

