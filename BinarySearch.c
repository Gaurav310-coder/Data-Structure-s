#include<stdio.h>

int BinarySearch(int arr[],int size,int e) {
    int low=0;
    int high=size-1,mid;
    while(low<=high) {
        mid=(low+high)/2;
        if(arr[mid]==e) {
            return mid;
        }
        if(arr[mid] < e) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return -1;
}

int main() {
    int arr[]= {1,2,3,4,5};
    int s=sizeof(arr)/sizeof(int);
    int e=2;
    printf("%d Element Found at index : %d",e,BinarySearch(arr,s,e));



    return 0;
}