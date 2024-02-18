#include<stdio.h>
void Display(int arr[],int n) {
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int paritition(int arr[],int low,int high) {
    int pivot = arr[low];
    int i=low+1;
    int j= high;
    do {
        while(arr[i]<pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i<j) {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    } while(i<j);
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}

void QuickSort(int arr[],int low,int high) {
    int  pi;
    if(low<high) {
        pi = paritition(arr,low,high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);
    }
}
int main()
{
    int arr[]= {5,4,3,2,1};
    int s = sizeof(arr)/sizeof(int);
    int low = 0;
    int high = s-1;
    Display(arr,s);
    QuickSort(arr,low,high);
    Display(arr,s);
    return 0;
}