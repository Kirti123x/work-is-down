#include<stdio.h>

int printarr(int i,int arr[],int n){
    
    if(i == n){
        return 0;
    }
    
        printf("enter %d value : ",i+1);
        scanf("%d",&arr[i]);
        printarr(i+1,arr,n);
    
}
int main(){
    int n;
    printf("Define the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printarr(0,arr,n);
}

