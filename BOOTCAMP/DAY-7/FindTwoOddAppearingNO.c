#include<stdio.h>

void findtwoodd(int arr[],int n){
    int result=0;
    int num1=0,num2=0,bit;

    for(int i=0;i<n;i++)
        result^=arr[i];
    bit=result&-result;

    for(int i=0;i<n;i++)
    (arr[i]&bit)?(num1^=arr[i]):(num2^=arr[i]);

    printf("Two Odd appearing numbers:%d and %d\n",num1,num2);

}
int main(){
    int arr[]={3,4,3,4,5,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    findtwoodd(arr,n);


    return 0;

}