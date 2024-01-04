#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,cnt[1001] = {0,}; cin>>a>>b;
    for(int i = 0; a>=1; i++){
        cnt[a%b]++;
        a = a / b;
    }
    for(int i = 0; i<1000; i++){
        cnt[1000] += cnt[i]*cnt[i];
    }
    cout<<cnt[1000];
    return 0;
}