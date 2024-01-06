#include <iostream>
#include <string>
using namespace std;
int main() {
    string a,b; cin>>a;cin>>b;
    string alterA,alterB;

    for(int i = 0; i<a.size(); i++){
        if( a[i] >= '0' && a[i] <= '9'){
            alterA+=a[i];
        }
    }
    for(int i = 0; i<b.size(); i++){
        if( b[i] >= '0' && b[i] <= '9'){
            alterB+=b[i];
        }
    }
    int result = stoi(alterA)+stoi(alterB);
    cout<<result;


    return 0;
}