#include<stdio.h>
void Display(int arr[],int n) {
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[],int n) {
    int key;
    for(int i=1; i<=n-1; i++) {
        key = arr[i];
        int j=i-1;
        while(arr[j] > key && j >=0) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]= {5,4,3,2,1};
    int s = sizeof(arr)/sizeof(int);
    Display(arr,s);
    insertionSort(arr,s);
    Display(arr,s);
    return 0;
}