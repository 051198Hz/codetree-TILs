#include <iostream>
using namespace std;
int main() {

    int n; cin>>n;
    int cnt = 0;
        for(int j = 9; j < n*n; j--){
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