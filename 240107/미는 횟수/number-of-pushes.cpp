#include <iostream>
using namespace std;
string push2right(string str){
    char c = str[str.size()-1];
    for(int k = str.size()-1; k>0; k--){
        str[k] = str[k-1];
    }
    str[0] = c;
    // cout<<str<<" ";
    return str;
}
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b; cin>>a; cin>>b;
    for(int i = 0; i<a.size()-1; i++){
        a = push2right(a);
        if(a.compare(b) == 0){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}