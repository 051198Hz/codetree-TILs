#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n; cin>>n;
    vector<int> v;
    for(int i = 0; i<n; i++){
        int tmp; cin>>tmp;
        if(tmp%2 == 0) v.push_back(tmp);
    }
    reverse(v.begin(),v.end());
    for(int item: v){
        cout<<item<<" ";
    }
    return 0;
}