#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int cnt = 0,line=0;
    for(int j = 1; ; line%2!=0?j+=2:j+=1){
        cout<<j<<" ";
        cnt++;
        if(cnt==n*n) return 0;
        if(cnt%n==0) {
            cout<<"\n";
            line++;
        }
    }

    return 0;
}