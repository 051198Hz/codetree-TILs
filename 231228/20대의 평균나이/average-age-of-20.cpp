#include <iostream>

int main() {
    double avg = 0;
    int cnt = 0;
    while(1){
        int tmp;
        std::cin>>tmp;
        if(tmp > 29 || tmp < 20){
            break;
        }
        cnt++;
        avg+=tmp;
    }
    avg/=cnt;
    std::printf("%.2lf",avg);
    return 0;
}