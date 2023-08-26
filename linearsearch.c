#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int arr[MAX];
void l_search(int arr[],int n,int x){
    int i,flag=0;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at index %d",i);
    }
    else{
        printf("Element not found!");
    }
}
int main(){
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[i]);
    int x;
    printf("Enter the element you want to seach: ");
    scanf("%d",&x);
    l_search(arr,n,x);
    return 0;
}