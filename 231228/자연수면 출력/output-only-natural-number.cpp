#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    std::cin>>a>>b;
    if(a>0){
        while(b--){
            std::cout<<a;
        }
    }else{
    std::cout<<0;

    }
    return 0;
}