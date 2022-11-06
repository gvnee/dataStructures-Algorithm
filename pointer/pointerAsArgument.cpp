//call by reference
#include<stdio.h>
#include<iostream>

void Increment(int* p){
    *p = (*p) + 1;
}

using namespace std;
int main(){

    int a = 10;
    Increment(&a); //pass address
    
    cout<<a<<"\n";
    
    return 0;
}