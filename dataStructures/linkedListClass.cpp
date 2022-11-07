#include<stdio.h>
#include<stdlib.h>

class Node{
public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    Node* head;
public:
    LinkedList(){ head = NULL; }
    bool isEmpty();
    void appendNode(int);
    void insertNode(int);
    void printList();
    void deleteNode(int);
    void reverse();
};
bool LinkedList::isEmpty(){
    if(head) return false;
    return true;
}
void LinkedList::appendNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}
void LinkedList::insertNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if(isEmpty()){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = newNode;
}
void LinkedList::printList(){

    if(isEmpty()){
        printf("the linked list is empty\n");
        return;
    }

    Node* temp = head;
    while(temp){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void LinkedList::deleteNode(int index){
    if(isEmpty()){
        printf("nothing to delete");
        return;
    }
    if(index<0){
        printf("invalid index");
        return;
    }
    if(index == 0){
        if(head->next == NULL){
            delete head;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = new Node();
    temp = head;
    int i = 0;
    while(temp){
        if(i == index-1){
            temp->next = temp->next->next;
        }
        temp = temp->next;
        i++;
    }

}

void LinkedList::reverse(){
    Node* prev = NULL;
    Node* newList = head;
    Node* oldList = head;

    while(oldList->next){
        newList->next = prev;
        prev = oldList;
        oldList = oldList->next;
    }
    head = newList;
}

int main(){

    LinkedList list;
    for(int i = 1;i<=10;i++){
        list.appendNode(i);
    }

    list.insertNode(100);

    list.deleteNode(1);

    list.printList();

    // list.reverse();

    list.printList();

    return 0;
}