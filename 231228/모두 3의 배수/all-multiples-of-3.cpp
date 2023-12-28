#include <iostream>

int main() {

    for(int i = 0; i<5; i++){
        int tmp;
        std::cin>>tmp;
        if(tmp%3 != 0){
            std::cout<<0;
            return 0;
        }
    }
    std::cout<<1;
    return 0;
}