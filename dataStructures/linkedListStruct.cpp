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
void insert(Node** head, int data, int index){
    Node* newNode = new Node();
    newNode->data = data;
    if(index == 1){
        newNode->next = *head;
        *head = newNode;
        return;
    }
    if(*head == NULL){
        printf("the list is empty\n");
        return;
    }
    Node* temp = *head;
    for(int i = 0;i<index-2;i++){
        if(temp->next == NULL){
            printf("index out of bound\n");
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void print(Node* head){
    while(head){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void remove(Node* head){

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

    insert(&head, 100, 1);
    insert(&head, 100, 4);
    insert(&head, 100, 6);
    insert(&head, 100, 2);

    // remove();

    print(head);

    return 0;
}