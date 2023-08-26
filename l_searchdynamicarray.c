#include <stdio.h>
#include <stdlib.h>

void l_search(int *p,int size,int x){
    int i,flag=0;
    for(i=0;i<size;i++){
        if(*(p+i)==x){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at index %d",i);
    }
    else{
        printf("Elemnt not found!");
    }
}

int main(){
    int size,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int *p = (int*)malloc(size*sizeof(int));
    printf("Enter the array elements: ");
    for(i=0;i<size;i++){
        scanf("%d",(p+i));
    }
    int x;
    printf("Enter the element you want to search: ");
    scanf("%d",&x);
    l_search(p,size,x);
    return 0;
}