#include <stdio.h>
#include <stdlib.h>

void b_search(int *arr,int x,int size){
    int l=0,u=size-1,mid,flag=0;
    while(l<=u){
        mid=(l+u)/2;
        if(arr[mid]==x){
            flag=1;
            break;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else{
            u=mid-1;
        }
    }
    if(flag==1){
        printf("Element found at index %d",mid);
    }
    else{
        printf("Element not found!");
    }
}

int main(){
    int i,x,size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int *arr = (int*)malloc(size*sizeof(int));
    printf("Enter a sorted array: "); //The array should be sorted.
    for(i=0;i<size;i++){
        scanf("%d",(arr+i));
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&x);
    b_search(arr,x,size);
    return 0;
}