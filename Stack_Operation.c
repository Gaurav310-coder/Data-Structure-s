#include<stdio.h>
#include<stdlib.h>

typedef struct Stack {
    int size;
    int top;
    int *arr;
} stk;

int isEmpty(stk *ptr) {
    if(ptr->top == -1) {
        return 1;
    }
    else {
        return 0;
    }

}

int isFull(stk* ptr) {
    if(ptr->top == ptr->size-1) {
        return 1;
    }
    else {
        return 0;
    }

}

void push(stk * ptr,int val) {
    if(isFull(ptr)) {
        printf("Stack OverFlow\n");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(stk * ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Overflow\n");
    }
    else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }

}

int peek(stk * ptr,int i) {
    int n = ptr->top-i+1;
    if(n < 0) {
        printf("Invalid Position\n");
    }
    else {
        return ptr->arr[n];
    }
}
void display(stk * s) {

    for(int j=1; j<=s->top+1; j++) {
        printf("%d \n",peek(s,j));
    }
    if(isEmpty(s)) {
        printf("Stack Is Empty\n");
    }
    if(isFull(s)) {
        printf("Stack Is Full\n");
    }

}


int stackTop(stk *s){
    printf("%d ",s->arr[s->top]);
}

int stackBottom(stk *s){
    printf("%d ",s->arr[0]);
}

int main() {
//Stack Creatation
    stk *s=(stk*)malloc(sizeof(stk));
    s->size=5;
    s->top=-1;
    s->arr=(int *)malloc(s->size *sizeof(int));
//Satck Operations
/*------------------------Push Operation
//display(s);
push(s,1);
push(s,2);
push(s,3);
push(s,4);
//display(s);
push(s,5);
//display(s);*/

/*------------------pop operation
pop(s);
pop(s);
pop(s);
pop(s);
pop(s);
display(s);
*/
//------------------stackTop & stackBottom
push(s,1);
push(s,2);
stackTop(s);
stackBottom(s);


  return 0;
}