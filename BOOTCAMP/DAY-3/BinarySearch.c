#include<stdio.h>
int binarysearch(int arr[],int left,int right,int key){
    if(left>right) return -1;
    int mid=left+(right-left)/2;

    if(arr[mid]==key) return mid;
    if(arr[mid]>key) return binarysearch(arr,left,mid-1,key);

    return binarysearch(arr,mid+1,right,key);
}
int main(){
    int n=6;
    int key=3;
    int arr[6]={0,1,2,3,4,5};
    int index=binarysearch(arr,0,n-1,key);

    if(index!=-1)
    printf("Element found at index %d\n",index);
    else
    printf("Element not found\n");
    return 0;
}