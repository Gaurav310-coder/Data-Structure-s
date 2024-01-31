#include<stdio.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;

int isEmpty(Node *top) {
    if(top == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(Node *top) {
    Node *p=(Node*)malloc(sizeof(Node));
    if(p==NULL) {
        return 1;
    }
    else {
        return 0;
    }
}
void Display(Node *ptr) {
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

Node *push(Node *top,int data) {
    if(isFull(top)) {
        printf("Stack Overflow\n");
    }
    else {
        Node *n=(Node *)malloc(sizeof(Node));
        n->data=data;
        n->next=top;
        top=n;
        return top;
    }
}

Node *pop(Node **top) {
    if(isEmpty(*top)) {
        printf("Stack UnderFlow");
    }
    else {
        Node *p = *top;
        *top = (*top)->next;
        int x= p->data;
        free(p);
        return x;
    }
}

int peek(Node *top,int p) {
    Node *ptr=top;
    for(int i=0; ((i< p-1) && ptr !=NULL);i++){
    ptr=ptr->next;
}
if(ptr!=NULL) {
    return ptr->data;
}
else {
    return -1;
}


}

int main()
{
    Node *top=NULL;
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    pop(&top);
    Display(top);
    //printf("\nPeeked Element : %d ",peek(top,1));
    return 0;
}