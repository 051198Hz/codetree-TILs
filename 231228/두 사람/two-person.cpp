#include <iostream>
using namespace std;
int main() {
    int age1;
    char sex1;
    cin>>age1>>sex1;
    int age2;
    char sex2;
    cin>>age2>>sex2;
    if( (sex1=='M' && age1>=19 ) || (sex2=='M'&& age2>=19)){
        cout<<1;
        return 0;
    }
    cout<<0;
    return 0;
}