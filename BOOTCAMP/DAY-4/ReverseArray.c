#include<stdio.h>

void reverseArray(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,n);
    printarray(arr,n);
    return 0;
}