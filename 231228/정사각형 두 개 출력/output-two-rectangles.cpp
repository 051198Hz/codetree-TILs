#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    std::cin>>a;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<a; j++){
            for(int k = 0; k<a; k++){
                std::cout<<"*";
            }
            std::cout<<"\n";
        }
        std::cout<<"\n";
    }
    return 0;
}