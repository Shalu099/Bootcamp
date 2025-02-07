#include<stdio.h>
int isSorted(int arr[],int n){
    for(int i=1;i<n;i++)
    if(arr[i]<arr[i-1])
    return 0;
    return 1;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Array is %ssorted\n",isSorted(a,n)?"":"not");
    return 0;
}