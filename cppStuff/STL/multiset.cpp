#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> multiSet = {1,2,3,1,3,3,2,3,3,4,4,5,6,2};
    for(const auto& e:multiSet){
        cout<<e<<"\n";
    }

    return 0;
}