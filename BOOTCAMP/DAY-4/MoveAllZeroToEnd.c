#include<stdio.h>

void moveZerosToEnd(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++)
    if(arr[i]!=0)
    arr[j++]=arr[i];
    while(j<n)
    arr[j++]=0;
}
int main(){
    int arr[]={0,1,9,8,4,0,0,2,7,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    moveZerosToEnd(arr,n);
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    printf("\n");
    return 0;
}