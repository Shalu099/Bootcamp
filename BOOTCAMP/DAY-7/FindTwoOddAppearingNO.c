#include<stdio.h>

int  oddoccuring(int arr[],int n){
    int result=0;
    for(int i=0;i<n;i++){
        result^=arr[i];
    }
    return result;
}
int main(){
    int arr[]={4,4,4,4,3,3,3,2,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the odd occuring number is :%d\n",oddoccuring(arr,n));
    return 0;
.
}