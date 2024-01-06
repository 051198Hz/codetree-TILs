#include <iostream>
using namespace std;
int main() {
    string str,orders;
    getline(cin,str);
    getline(cin,orders);
//    cin>>str;
//    cin>>orders;
    int size = str.size();
//    cout<<str<<" "<<orders;
//
    for(int i = 0; i < orders.size(); i++){
        if(orders[i] == 'L'){
            char tmp = str[0];
            for(int j = 1; j<size; j++){
                str[j-1] = str[j];
            }
            str[size-1] = tmp;
        }else{
            char tmp = str[size-1];
            for(int j = size-2; j >= 0; j--){
                str[j+1] = str[j];
            }
            str[0]=tmp;
        }
    }
    cout<<str;
    return 0;
}