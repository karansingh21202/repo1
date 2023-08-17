#include <iostream>
#include <vector>

using namespace std;
int N=1e3;
 int adj_matrix[N][N];

int main() {
    int n, m; // n is the number of vertices, m is the number of edges
    cin >> n >> m;
    
   ; // create an n x n matrix initialized with 0
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1; // set the corresponding entries in the matrix to 1
        adj_matrix[v][u] = 1; // assuming the graph is undirected
    }
    
    // print the adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
