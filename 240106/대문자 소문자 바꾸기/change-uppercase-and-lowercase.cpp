#include <iostream>
using namespace std;
int main() {
    string str; cin>>str;
    for(int i = 0; i<str.size(); i++){
        if(str[i] <= 90){ //대문자 -> 소문자
            cout<<(char)((int)str[i] + ('a'-'A'));
        }else{ //소문자
            cout<<(char)((int)str[i] - ('a'-'A'));
        }
    }
    return 0;
}