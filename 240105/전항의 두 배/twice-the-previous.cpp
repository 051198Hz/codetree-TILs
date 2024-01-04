#include <iostream>
using namespace std;
int main() {
    int memo[10] = {0,};
    cin>>memo[0]>>memo[1];
    cout<<memo[0]<<" "<<memo[1]<<" ";
    for(int i = 2; i<10;i++){
        memo[i] = memo[i-1]+ 2* memo[i-2];
        cout<<memo[i]<<" ";
    }

    return 0;
}