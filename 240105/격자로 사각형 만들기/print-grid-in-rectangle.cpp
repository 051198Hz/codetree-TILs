#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    
    int memo[10][10] = {0,};
    for(int i = 0; i<n;i++){
        memo[0][i] = 1;
    }
    for(int i = 0; i<n;i++){
        memo[i][0] = 1;
    }

    for(int i = 1; i<n;i++){
        for(int j = 1; j<n; j++){
            memo[i][j] = memo[i-1][j]+memo[i][j-1]+memo[i-1][j-1];
        }
    }

    for(int i = 0; i<n;i++){
        for(int j = 0; j<n; j++){
            cout<<memo[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}