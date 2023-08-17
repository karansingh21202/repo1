#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,k;
    cout<<"enter i j nd k";
    cin>>i>>j>>k ;
int l,re=0;
    for(;i<=j;i++)
{
            i=l;
       
        re=re + i%10;
        i=i/10;
    }   
    cout<<"value of re ";
    cout<<re;

    
    return 0;
}