#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n , i , j;
   cout<<"enter the number\n";
   cin>>n;
   vector<int>v;
   cout<<"enter the values to vector\n";
   for(i=0; i<n ; i++){
   	
       cin>>j;
       v.push_back(j);
   }
   int x;
   cout<<"to the size\n ";
   cin>>x;
   int a,b;
   cout<<"eneter the value of a nd b \n";
   cin>>a>>b;
        v.erase(v.begin()+(1-x));
     v.erase(v.begin()+(1-a),v.begin()+b);
 cout<<"the size of array after removing the integer \n"<<v.size();
    //  cout<<"now the remaining size of vector \n"<<v<<" ";
     
  for(i=0 ; i<v.size() ;i++){
        cout<<"now the remaining size of vector \n"<<v[i]<<" ";
  }
   
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

