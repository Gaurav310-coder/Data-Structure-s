#include<stdio.h>

void display(int arr[],int size) {
    for(int i=0; i < size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insert(int arr[],int size,int capacity,int element,int index) {
    if(size >= capacity) {
        return -1;

    }

    for(int i=size-1; i >= index; i--) {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    
    return 1;
}


int main()
{

    int arr[]= {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    display(arr,size);
    insert(arr,size,100,9,8);
    size+=1;
    display(arr,size);

    return 0;
}