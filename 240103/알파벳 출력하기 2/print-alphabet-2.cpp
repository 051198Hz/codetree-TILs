#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    char cnt = 'A';


        for (int j = 0; j < n; ++j) {

            for (int k = 0; k < j; ++k) {
                cout<<"  ";
            }
            for (int k = 0; k < n-j; ++k) {
                if(cnt=='Z'+1){
                    cnt='A';
                }
                cout<<cnt++<<" ";
            }
            cout<<"\n";
        }
    
    return 0;
}