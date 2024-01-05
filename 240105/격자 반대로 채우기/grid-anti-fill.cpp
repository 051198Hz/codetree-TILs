#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,grid[10][10]; cin>>n;
    bool up = true;
    int cnt = 1;
    
    for(int i = n-1; i>=0; i--){
        if(up){
            for(int j = n-1; j>=0; j--){
                grid[j][i] = cnt;
                cnt++;
            }
        }else{
            for(int j = 0; j<n; j++){
                grid[j][i] = cnt;
                cnt++;
            }
        }
        up = !up;
    }

    for(int i = 0; i<n;i++){
        for(int j = 0; j<n; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}