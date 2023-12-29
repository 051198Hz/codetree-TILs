#include <iostream>

int main() {
    int n;
    std::cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j< (n) - (i); j++){

            std::cout<<"*";

        }
        for(int k = 0; k< i*2; k++){
            std::cout<<" ";

        }
        for(int p = 0; p < (n)- (i); p++){
            std::cout<<"*";
        }
    std::cout<<"\n";

    }

    return 0;
}