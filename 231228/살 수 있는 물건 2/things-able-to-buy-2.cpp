#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct stuck{
    string name;
    int price;
}stuck;

bool comp(stuck a, stuck b){
    return a.price > b.price;
}
int main() {
    int effort;
    cin>>effort;

    vector<stuck> stucks;
    stucks.push_back(stuck{"book", 3000 });
    stucks.push_back(stuck{"mask", 1000 });
    stucks.push_back(stuck{"pen", 500 });

    sort(stucks.begin(), stucks.end(), comp);

    for(stuck item: stucks){
        if(item.price <= effort){
            cout<<item.name;
            return 0;
        }
    }

    cout<<"no";


    return 0;
}