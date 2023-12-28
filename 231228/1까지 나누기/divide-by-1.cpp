#include <iostream>


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    for(int i = 1; ; i++){
        n/=i;
        if(n<=1){
            std::cout<<i;
            break;
        }
    }

    return 0;
}