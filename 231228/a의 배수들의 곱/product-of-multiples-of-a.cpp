#include <iostream>

int main() {
    int a,b;
    int result = 1;
    std::cin>>a>>b;

    for(int i = 1; i<=b; i++){
        if( !(i%a) ){
            result*=i;
        }
    }

    std::cout<<result;
    return 0;
}