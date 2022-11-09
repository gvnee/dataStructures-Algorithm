// Syntax: std::array<T, N> array;
#include<iostream>
#include<array>

int main(){

    //Declaration
    std::array<int, 5> myArray;

    //initialization
    std::array<int, 5> myArray2 = {1,2,3,4,5};

    std::cout<<myArray2.at(3)<<"\n";
    std::cout<<myArray2.front()<<"\n";

    return 0;
}