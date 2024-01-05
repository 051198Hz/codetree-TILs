#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int grid[10][10] = {0,};
    int n,m; cin>>n>>m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>grid[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            int tmp; cin>>tmp;
            if(tmp==grid[i][j]){
                grid[i][j]=0;
            }else{
                grid[i][j]=1;
            }
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}