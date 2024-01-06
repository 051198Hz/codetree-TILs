#include <iostream>
using namespace std;
int main() {
    string str; cin>>str;
    string substring = "";
    for(int i = 1; i<str.size(); i+=2){
        substring+=str[i];
    }
    for(int i = substring.size()-1; i>=0; i--){
        cout<<substring[i];
    }
    return 0;
}