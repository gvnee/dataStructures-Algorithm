#include<iostream>
#include<set>
#include<string>
using namespace std;
class Person{
    public:
        int age;
        string name;
    bool operator < (const Person& rhs) const { return age<rhs.age; }
    bool operator > (const Person& rhs) const { return age>rhs.age; }
};

int main(){
    set<int> Set = {1,2,3,4,5,1,2,3,4,5};
    for(const auto& e: Set){
        cout<<e<<"\n";
    }

    set<Person, greater<>> people = {
        {30, "John"},
        {18, "Bat"},
        {35, "Joe"},
        {3, "Some"},
        {3, "Bruh"}
    };
    for(const auto& e: people) cout<<e.age<<" "<<e.name<<"\n";

    return 0;
}