#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,cnt[1002] = {0,}; cin>>a>>b;
    for(int i = 0; a>1; i++){
        // cout<<a%b<<" ";
        cnt[a%b]++;
        a = a / b;
    }
    for(int i = 0; i<1001; i++){
        cnt[1001] += cnt[i]*cnt[i];
    }
    cout<<cnt[1001];
    return 0;
}