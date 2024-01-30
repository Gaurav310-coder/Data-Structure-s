#include<stdio.h>
#include<conio.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;


void display(Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

}


int main(){

Node* head = (Node*)malloc(sizeof(Node));
Node* first = (Node*)malloc(sizeof(Node));
Node* second = (Node*)malloc(sizeof(Node));
Node* third = (Node*)malloc(sizeof(Node));


(*head).data=1;
(*head).next=first;

//head->data=1;
//head->next=first;

first->data=2;
first->next=second;

second->data=3;
second->next=third;

third->data=4;
third->next=NULL;

display(head);

}