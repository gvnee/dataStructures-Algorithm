#include<iostream>
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};

    std::cout<<arr<<"\n";
    std::cout<<*arr<<"\n";

    //address of element at index i
    int i = 3;
    std::cout<<&arr[3]<<"\n";
    std::cout<<(arr+3)<<"\n";

    return 0;
}