#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    std::cin>>a>>b;
    while(a>=b){
        std::cout<<a<<" ";
        a-=2;
    }
    return 0;
}