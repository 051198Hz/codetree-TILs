#include <iostream>
#include <string>
using namespace std;
int main() {
    int n; cin>>n;
    int sum = 0;
    for(int i = 0; i<n; i++){
        int tmp; cin>>tmp;
        sum+=tmp;
    }
    string str = to_string(sum);
    char c = str[0];
    for(int i = 1; i<str.size(); i++){
        str[i-1] = str[i];
    }
    str[str.size()-1] = c;
    cout<<str;
    return 0;
}