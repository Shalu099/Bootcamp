#include<stdio.h>

void productArray(int arr[],int n){
    int prod[n],left=1,right=1;

    for(int i=0;i<n;i++)
    prod[i]=1;
    for(int i=0;i<n;i++)
    prod[i]*=left,    left*=arr[i];
      for(int i=0;i<n;i++)
      prod[i]*=right,right*=arr[i];

      for(int i=0;i<n;i++)
      printf("%d ",prod[i]);
    
}
int main(){
    int arr1[]={1,2,3,4};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    productArray(arr1,n);
    return 0;
}