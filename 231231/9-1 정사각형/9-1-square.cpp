#include <iostream>
using namespace std;
int main() {

    int n; cin>>n;
    if(n==1){
        cout<<9;
        return 0;
    }
    int cnt = 0;
        for(int j = 9; ; j--){
            if(cnt==n*n) break;
            if(j==0) j=9;
            cout<<j;
            cnt++;
            if( (cnt) % n == 0){
                cout<<"\n";
            }
        }


    return 0;
}