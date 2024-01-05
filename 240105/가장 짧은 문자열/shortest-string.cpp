#include <iostream>
using namespace std;
int main() {
    string strs[3];
    int min=99999,max=0;
    for(int i = 0; i<3; i++){
        cin>>strs[i];
        if(strs[i].size() < min){
            min = strs[i].size();
        }
        if(strs[i].size() > max){
            max = strs[i].size();
        }
    }
    cout<<max-min;
    return 0;
}