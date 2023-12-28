#include <iostream>

int main() {
    int n;
    std::cin>>n;
    for(int i = 0; i<n; i++){
        int tmp;
        std::cin>>tmp;
        if( (tmp%2) && !(tmp%3) ){
            std::cout<<tmp<<"\n";
        }
    }
    return 0;
}