#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct thing{
    string name;
    int price;
} thing;

bool cmp(thing a, thing b) { 
  return a.price > b.price; 
}

int main() {
    int effort;
    cin>>effort;

    vector<thing> things;
    things.push_back(thing{"book",3000 });
    things.push_back(thing{"mask",5000 });

    sort(things.begin(), things.end(), cmp); 

    vector<thing>::iterator iter;

    for(thing &item: things){
        if(item.price <= effort){
            cout<<item.name;
            return 0;
        }
    }

    cout<<"no";

    return 0;
}