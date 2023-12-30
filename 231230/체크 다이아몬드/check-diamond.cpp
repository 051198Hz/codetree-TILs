#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i = -1 * n + 1; i< n; i++){
            if( i!= 0 ){
                cout<<" ";
            }else{
                cout<<"*";  
            }
        for(int j = 0; j < 5 - abs(i); j++){
            if (i%2 == 0){
                if(j%2 ==0){
                    cout<<" ";
                }else{
                    cout<<"*";
                }
            }else{
                if(j%2 ==0){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }
    
    return 0;
}