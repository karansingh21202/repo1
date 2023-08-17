#include<bits/stdc++.h>
using namespace std;
//  #define  ;
int graph[100][100];


int main(){
cout<<"enter the no of nodes and no of edges";
int n,m;
cin>>n>>m;
int u,v;
while(m--){
    
    cin>>u>>v;
    graph[u][v]=1;
}
// while(m--){
    
//     // cin>>u>>v;
//   cout<<  graph[u][v];
// }
for(int i=1;i<=n;i++){
  for(int j=1;j<=n;i++){
  cout<<graph[i][j]<<" ";
  }
}
// }
return 0;

}



