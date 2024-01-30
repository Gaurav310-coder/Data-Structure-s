#include<stdio.h>

int linearSearch(int arr[],int size,int e) {
    for(int i=0; i<size; i++) {
        if(arr[i]==e) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[]= {1,2,3,4,5};
    int s=sizeof(arr)/sizeof(int);
    int e=1;
    printf("%d Element Found at index : %d",e,linearSearch(arr,s,e));



    return 0;
}