#include<iostream>
#include<vector>
int main(){
    std::vector<int> dynamic_array{1, 2, 3, 4, 5};
    std::cout<<dynamic_array.at(3)<<"\n";
    std::cout<<dynamic_array.data()<<"\n";


    std::vector<int> vec;
    std::cout<<vec.size()<<" "<<vec.capacity()<<"\n";
    for(int i = 0;i<32;i++){
        vec.push_back(i);
        std::cout<<vec.size()<<" "<<vec.capacity()<<"\n";
    }
    std::cout<<"\n";


    std::vector<int> vec2;
    vec2.reserve(1000);
    std::cout<<vec2.size()<<" "<<vec2.capacity()<<"\n";
    for(int i = 0;i<32;i++){
        vec2.push_back(i);
        std::cout<<vec2.size()<<" "<<vec2.capacity()<<"\n";
    }
    std::cout<<"\n";

    return 0;
}