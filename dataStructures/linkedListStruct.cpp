#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    Node* next;
};

void append(Node** head, int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = *head;
    *head = temp;
}
void print(Node* head){
    while(head){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(){
    Node* head = NULL;

    printf("how many numbers\n");
    int n;
    scanf("%d", &n);
    int data;
    for(int i = 0;i<n;i++){
        printf("enter a number\n");
        scanf("%d", &data);
        append(&head, data);
    }
    print(head);

    return 0;
}