#include<stdio.h>
#include<stdlib.h>

typedef struct myArray {
    int total_size;
    int used_size;
    int *ptr;

} myarr;

void createArray(myarr *a,int tsize,int usize) {
    (*a).total_size=tsize;
    (*a).used_size=usize;
    (*a).ptr=(int *)malloc(tsize*sizeof(int));

}

void Show(myarr *a) {
    for(int i=0; i < a->used_size; i++) {
        printf("%d ",(a->ptr)[i]);
    }

}

void setVal(myarr *a) {
    int n;
    for(int i=0; i< a->used_size; i++) {
        printf("Enter element %d :",i);
        scanf("%d ",&n);
        (a->ptr)[i]=n;
    }
}

int main()
{
    myarr arr;

    createArray(&arr,10,5);
    Show(&arr);
     setVal(&arr);
    Show(&arr);
 
    return 0;
}