#include <iostream>
using namespace std;
int main() {
    int n,m; cin>>n>>m;
    int grid[10][10] = {0,};
    for(int i = 0; i<m; i++){
        int row,col; cin>>row>>col;
        grid[row-1][col-1] = row * col;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}