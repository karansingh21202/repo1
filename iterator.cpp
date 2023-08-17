#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter \n";
   
 cin>>n;
 vector<int>v;
// vector<int>v;
int i , j;
for(i=0;i<n;i++){
    cin>>j;
    v.push_back(j);

}
for(i=0;i<n;i++){
    cout<<v[i]<<" "<<endl;
}
for(int value:v){
    cout<<value<<" \n";
}
cout<<endl;
// iterator use kiya hua h
vector<int>::iterator lpy;
for(lpy=v.begin();lpy!=v.end();lpy++){
    cout<<(*lpy)<<" ";
}

// auto method use krna sikh rha hu
for(auto it=v.begin(); it!=v.end(); it++){
    cout<<(*it)<<" ";
}















    return 0;
}