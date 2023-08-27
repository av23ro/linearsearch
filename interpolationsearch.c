#include <stdio.h>
#include <stdlib.h>

int interpolation_search(int arr[],int n,int x){
    int l=0,u=n-1,mid;
    while(l<=u){
        mid=l+(u-l)*((x-arr[l])/(arr[u]-arr[l]));
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else{
            u=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,i,x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter a sorted array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&x);
    int res = interpolation_search(arr,n,x);
    if(res==-1){
        printf("Element not found!!");
    }
    else{
        printf("Element found at index %d.",res);
    }
    return 0;
}