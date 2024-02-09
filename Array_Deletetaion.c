#include<stdio.h>

void Display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void Delete(int arr[],int size, int index){
    for(int i = index ;i < size;i++){
        arr[i]=arr[i+1];
    }
}
int main(){
    int arr[]={1,2,2,3,4,5};
    int s = sizeof(arr)/sizeof(int);
    Display(arr,s);
    Delete(arr,s,2);
    s--;
    Display(arr,s);
    return 0;
}
