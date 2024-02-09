#include<stdio.h>

void insert(int arr[],int size,int capacity,int index,int element) {
    if(size >=capacity) {
        printf("Insertion Failed");
    }
    else {
        for(int i= size-1; i >=index; i--) {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
    }
}
void Display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[]= {1,2,4,5,7};
    int s = sizeof(arr)/sizeof(int);
    Display(arr,s);
    insert(arr,s,100,2,3);
    s++;
    Display(arr,s);
    return 0;
}
