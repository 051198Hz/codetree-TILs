#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,cnt[12] = {0,}; cin>>a>>b;
    for(int i = 0; a>=1; i++){
        cnt[a%b]++;
        a = a / b;
    }
    for(int i = 0; i<11; i++){
        cnt[11] += cnt[i]*cnt[i];
    }
    cout<<cnt[11];
    return 0;
}