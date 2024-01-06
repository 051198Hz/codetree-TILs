#include <iostream>
using namespace std;
int main() {
    string a,b;
    cin>>a;cin>>b;
    string apb,bpa;
    apb = a+b;
    bpa = b+a;
    if(apb.compare(bpa)==0){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}