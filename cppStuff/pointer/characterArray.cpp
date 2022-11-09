#include<stdio.h>

void print(char* C){
    int i = 0;
    while(C[i] != '\0'){
        printf("%c", C[i]);
        i++;
    }
    printf("\n");
}

int main(){
    char c[6];
    c[0] = 'a';
    c[1] = 'a';
    c[2] = 'a';
    c[3] = 'a';
    c[4] = 'a';
    c[5] = '\0';
    printf("%s\n", c);

    char C[] = "Hello";
    print(C);

    return 0;
}