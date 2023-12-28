#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    sort(arr.begin(), arr.end());

    cout<<arr.at(1);
    
    return 0;
}