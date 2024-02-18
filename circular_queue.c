#include<stdio.h>

struct Queue {
    int size;
    int front;
    int rear;
    int *arr;
};

int isFull(struct Queue *q) {
    if(q->front == ((q->rear+1)%q->size)) {
        return 1;
    }
    else {
        return 0;
    }

}
int isEmpty(struct Queue *q) {
    if(q->rear == q->front) {
        return 1;
    }
    else {
        return 0;
    }
}

void Enqueue(struct Queue *q,int val) {
    if(isFull(q)) {
        printf("The Queue is Full.\n");
    }
    else {
        q->rear =((q->rear+1)%q->size);
        q->arr[q->rear]=val;

    }

}
int dequeue(struct Queue *q) {
    int val=-1;
    if(isEmpty(q)) {
        printf("The Queue is Empty");
    }
    else {
        q->front=((q->front+1)%q->size);
        val=q->arr[q->front];
    }
    return val;
}

void  main() {
    struct Queue q;
    q.size = 5;
    q.front = -1;
    q.rear = -1;
    q.arr=(int *)malloc(q.size * sizeof(int));
    Enqueue(&q,1);
    Enqueue(&q,2);
    Enqueue(&q,3);
    Enqueue(&q,4);
    Enqueue(&q,5);
    if(isEmpty(&q)) {
        printf("Queue is Empty\n");
    }
    else if(isFull(&q)) {
        printf("The Queue is Full\n");

    }
    printf("%d ",dequeue(&q));
    printf("%d ",dequeue(&q));

}