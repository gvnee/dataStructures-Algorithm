// Structure is a collection of variables of different data types under a single name. It is similar to a class in that, both holds a collecion of data of different data types.
#include<stdio.h>

struct Person{
    char name[50];
    int age;
    float salary;
};


int main(){
    Person person1;

    person1.age = 18;

    return 0;
}