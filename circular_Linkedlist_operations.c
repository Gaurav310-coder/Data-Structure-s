#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

//Display Circular Linked-List
void Display(Node* head) {
    Node *ptr=head;
    do {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    } while(ptr!=head);
}

//Push New Node At the End of the Circular Linked-LIst
Node *push(Node *head,int data) {
    Node* ptr=head;
    Node* new=(Node*)malloc(sizeof(Node));
    new->data=data;
    while(ptr->next!=head) {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=head;
    return head;
}

//Create a New Head Of THe Circular Linked-List
Node *newHead(Node *head,int data) {
    Node* ptr=head;
    Node* new=(Node*)malloc(sizeof(Node));
    new->data=data;
    while(ptr->next!=head) {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=head;
    head=new;
    return head;
}
//insert a new Node at the Given Index
Node *insert(Node *head,int i,int data) {
    Node* ptr=head;
    Node* new=(Node*)malloc(sizeof(Node));
    new->data=data;
    int j=0;
    while(j!=(i-1)) {
        ptr=ptr->next;
        j++;
    }
    new->next=ptr->next;
    ptr->next=new;
    return head;
}
//Delete a Head node of the Circular LInked-list
Node *deleteHead(Node *head){
    Node *ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=head->next;
    Node *q=head;
    head=head->next;
    free(q);
    return head;
}

//Delete The LAst Node of the Circular LInked-List
Node *pop(Node *head){
    Node *p=head;
    Node *q=p->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;
    }
    
    p->next=q->next;
    free(q);
    return head;
}

int main() {

    Node *head=(Node*)malloc(sizeof(Node));
    Node *first=(Node*)malloc(sizeof(Node));
    Node *second=(Node*)malloc(sizeof(Node));
    Node *third=(Node*)malloc(sizeof(Node));

    head->data=1;
    head->next=first;

    first->data=2;
    first->next=second;

    second->data=4;
    second->next=third;

    third->data=5;
    third->next=head;
//Operations For Circular Linked-List 
    head=newHead(head,0);
    head=push(head,6);
    head=insert(head,3,3);
    head=deleteHead(head);
    head=pop(head);
    Display(head);

}