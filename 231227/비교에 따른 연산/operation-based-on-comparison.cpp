#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<a*b;
        return 0;
    }
    cout<<b%a;
    return 0;
}