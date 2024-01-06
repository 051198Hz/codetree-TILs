#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int n; cin>>n;

    int cnt = 0,sum = 0;

    string strs[20];
    for(int i = 0; i<n; i++){
        cin>>strs[i];
    }

    char c; cin>>c;

    for(int i = 0; i<n; i++){
        if(strs[i][0]==c){
            sum+=strs[i].size();
            cnt++;
        }
    }
    printf("%d %.2lf",cnt,(double)sum/(double)cnt);
    return 0;
}