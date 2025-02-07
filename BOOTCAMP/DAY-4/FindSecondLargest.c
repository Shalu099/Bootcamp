#include<stdio.h>
#include<limits.h>

int secondlargest(int arr[],int n){
    int largest=INT_MIN,second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
    }
    return (second==INT_MIN)?-1:second;
}
int main(){
    int arr[]={12,35,1,20,1,54};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Second largest element:%d\n",secondlargest(arr,n));
    return 0;
}