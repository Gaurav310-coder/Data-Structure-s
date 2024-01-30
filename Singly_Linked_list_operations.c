#include<stdio.h>
#include<conio.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Insert New Head Node In Singly-Linked-List
Node *newHead(Node* head,int data) {
    Node*ptr=(Node*)malloc(sizeof(Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

// Insert New Node at given index In Singly-Linked-List
Node* atIndex(Node* head,int data,int index) {
    Node* ptr=(Node*)malloc(sizeof(Node));
    Node *p=head;
    int i=0;
    while(i!=(index-1)) {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    return head;
}

//Insert at the end of the Linked-List
Node * atEnd(Node* head,int data) {
    Node * ptr = (Node*)malloc(sizeof(Node));
    Node * p=head;
    while(p->next != NULL) {
        p=p->next;
    }

    p->next=ptr;
    ptr->data=data;
    ptr->next=NULL;
    return head;

}

void display(Node *ptr) {
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

}

int main() {

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
    printf("\nLinked List With New Node\n");
//New Head Node
    head = newHead(head,0);
//head = newHead(head,-1);
// New Node at Given Index
    head=atIndex(head,3,2);
//New Node at the End
    head = atEnd(head,6);
    display(head);

}