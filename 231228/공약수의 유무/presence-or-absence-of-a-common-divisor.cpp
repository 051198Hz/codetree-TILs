#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    std::cin>>a>>b;

    for(int i = a; i<=b; i++){
        if( !(1920%i) && !(2880%i) ){
            std::cout<<1;
            return 0;
        }
    }
    std::cout<<0;
    return 0;
}