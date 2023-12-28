#include <iostream>
#include <cmath>
int main() {
    int n;
    std::cin>>n;
    
    for(int i = -1 * (n-1) ; i < n ; i++){
        for(int j = 0; j < n-abs(i) ; j++){
            std::cout<<"*";
        }
        std::cout<<"\n"<<"\n";
    }
    return 0;
}