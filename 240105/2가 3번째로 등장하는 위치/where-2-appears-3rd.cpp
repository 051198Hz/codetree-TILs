#include <iostream>
using namespace std;
int main() {
    int n,cnt=0; cin>>n;
    for(int i = 0; i<n; i++){
        int tmp; cin>>tmp;
        if(tmp==2) cnt++;
        if(cnt==3) {
            cout<<i+1;
            return 0;
            }
    }
    return 0;
}