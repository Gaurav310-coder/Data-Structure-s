#include<stdio.h>
void Display(int arr[],int n) {
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[],int n) {
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }


}
int main()
{
    int arr[]= {5,4,3,2,1};
    int s = sizeof(arr)/sizeof(int);
    Display(arr,s);
    selectionSort(arr,s);
    Display(arr,s);
    return 0;
}