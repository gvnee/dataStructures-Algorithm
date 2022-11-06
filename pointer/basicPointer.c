#include<stdio.h>
int main(void){
    int a = 69;
    int *p = &a;

    printf("variable: %d\n", a);
    printf("pointer: %p\n", p);
    printf("reference of pointer: %p\n", &p);
    printf("dereferencing pointer: %d\n", *p);

    *p = 420;//dereferencing

    printf("variable modified by derefernecing pointer: %d\n", a);
    
    return 0;
}