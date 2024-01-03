#include <iostream>
using namespace std;
int main() {
    int a,b; cin>>a>>b;

    for (int i = 0; i < 4; ++i) {
        for (int j = b; j > a-1; --j) {
            if(j!=b){
                cout<<" / ";
            }
            cout<<j<<" * "<<2*(i+1)<<" = "<<j*2*(i+1);
        }
        cout<<"\n";
    }
    
    return 0;
}