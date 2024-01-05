#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n,min=9999; cin>>n;
    vector<int> v;
    for(int i = 0; i<n; i++){
        int tmp; cin>>tmp; v.push_back(tmp);
        for(int j = 0; j<v.size()-1; j++){
           if( abs( v.at(j) - v.at(v.size()-1) ) < min ){
            min = abs( v.at(j) - v.at(v.size()-1));
           }
        }
    }
    cout<<min;
    return 0;
}