#include<stdio.h>
#include<iostream>
using namespace std;
int main(){

    int a = 5;
    int* p = &a;

    cout<<"p: "<<p<<"\n";
    cout<<"*p: "<<*p<<"\n";
    cout<<"&p: "<<&p<<"\n";

    int** q = &p; // pointer to pointer

    cout<<"q: "<<q<<"\n";
    cout<<"*q: "<<*q<<"\n";
    cout<<"&*q: "<<&*q<<"\n";


    return 0;
}