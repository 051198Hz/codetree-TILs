#include <iostream>
using namespace std;
int main() {
    string strs[2];
    getline(cin, strs[0]);
    getline(cin, strs[1]);
    for(int i = 0; i<strs[0].size(); i++){
        if(strs[0][i] != ' '){
            cout<<strs[0][i];
        }
    }
    for(int i = 0; i<strs[1].size(); i++){
        if(strs[1][i] != ' '){
            cout<<strs[1][i];
        }
    }
    return 0;
}