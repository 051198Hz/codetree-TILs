#include <iostream>

int main() {
    int n;
    std::cin>>n;

    for(int i = 1; ; i++){
        if(!(n%2)){
            n*=3;
            n+=1;
        }else{
            n*=2;
            n+=2;
        }
        if( !(n<1000)) {
            std::cout<<i;
            break;
        }
    }
    return 0;
}