#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    while(1){
        cout<<a<<" ";
        a+=2;
        if( a > b){
            break;
        }
    }
    return 0;
}