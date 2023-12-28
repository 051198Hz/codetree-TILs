#include <iostream>

int main() {
    int cnt = 5;
    int n = 0;
    while(cnt--){
        int tmp;
        std::cin>>tmp;
        if(!(tmp%2)){
            n++;
        }
    }
    std::cout<<n;
    return 0;
}