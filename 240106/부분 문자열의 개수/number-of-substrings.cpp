#include <iostream>
using namespace std;
int main() {
    string str,word; int cnt=0;
    cin>>str;
    cin>>word;

    for(int i = 0; i < str.size()-word.size()+1; i++){
        string tmp = str.substr(i,word.size());
        if(tmp.compare(word)==0){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}