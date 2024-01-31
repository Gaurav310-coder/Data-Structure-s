#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* pre;

} Node;

//Display Doubly Linked-List in Forward
void forward(Node* head) {
    Node *ptr=head;
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

//Display Doubly Linked-List in Reverse
void reverse(Node *head) {
    Node *ptr=head;
    while(ptr->next !=NULL) {
        ptr=ptr->next;
    }
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->pre;
    }
}


//Push New Node At the End of the Doubly Linked-LIst
Node *push(Node *head,int data) {
    Node *ptr=head;
    Node *new = (Node*)malloc(sizeof(Node));
    new->next=NULL;
    while(ptr->next !=NULL) {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->pre=ptr;
    new->data=data;
    return head;
}

//Create a New Head Of THe Doubly Linked-List
Node *newHead(Node *head,int data) {
    Node *new = (Node*)malloc(sizeof(Node));
    new->pre=NULL;
    Node *ptr=head;
    ptr->pre=new;
    new->next=ptr;
    head=new;
    return head;
}
//insert a new Node at the Given Index
Node *insert(Node *head,int i,int data) {
    Node *ptr=head;
    Node *q=ptr->next;
    Node *new = (Node*)malloc(sizeof(Node));
    new->data=data;
    int j=0;
    while(j!=(i-1)) {
        ptr=ptr->next;
        q=q->next;
        j++;
    }
    ptr->next=new;
    new->pre=ptr;
    new->next=q;
    q->pre=new;
    return head;
}
//Delete a Head node of the Doubly LInked-list
Node *deleteHead(Node *head) {
    Node *ptr=head;
    Node *q= ptr->next;
    q->pre=NULL;
    free(ptr);
    head=q;
    return head;
}

//Delete The Last Node of the Circular LInked-List
Node *pop(Node *head) {
    Node *ptr=head;
    Node *q=ptr->next;
    while(q->next != NULL) {
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;
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
    head->pre=NULL;

    first->data=2;
    first->next=second;
    first->pre=head;

    second->data=4;
    second->next=third;
    second->pre=first;

    third->data=5;
    third->next=NULL;
    third->pre=second;

    head = push(head,6);
    head= newHead(head,0);
    head = insert(head,3,3);
    head = deleteHead(head);
    head=pop(head);
    forward(head);
//   reverse(head);
//Operations For Circular Linked-List

}