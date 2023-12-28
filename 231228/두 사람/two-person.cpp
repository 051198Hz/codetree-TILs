#include <iostream>
using namespace std;
int main() {
    int age1;
    char sex1;
    cin>>age1>>sex1;
    int age2;
    char sex2;
    cin>>age2>>sex2;
    if( (age1>=19 || age2>=19) && (sex1=='M'||sex2=='M')){
        cout<<1;
        return 0;
    }
    cout<<0;
    return 0;
}