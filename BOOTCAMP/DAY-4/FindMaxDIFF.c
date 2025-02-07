#include<stdio.h>

int maxdiff(int arr[],int n){
    int minVal=arr[0],maxDIFF=arr[1]-arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-minVal>maxDIFF)
        maxDIFF=arr[i]-minVal;
        if(arr[i]<minVal)
        minVal=arr[i];
    }
    return maxDIFF;
}
int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Difference:%d\n",maxdiff(arr,n));
    return 0;
}