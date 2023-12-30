#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    
    int n;
    cin>>n;

    vector<int> v;

    if(n==1){
        cout<<"*"<<"\n"<<"*";
        return 0;
    }else{
        for(int i = n; i > 1; i--){
            v.push_back(i);
        }
    }

    v.insert(v.begin()+1, 1);

    for(int i = 0; i<n; i++){
        for(int j = 0; j<v.at(i); j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    for(int i = n-1; i >=0; i--){
        for(int j = v.at(i) -1 ; j>=0; j--){
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}