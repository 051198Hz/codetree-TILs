#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str; cin>>str;
    bool first = false;
    for(int i = 0; i<str.size(); i++){
        if(str[i]=='e' && first==false){
            first = true;
        }else{
            cout<<str[i];
        }
    }
    return 0;
}