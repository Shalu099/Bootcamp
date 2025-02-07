#include<stdio.h>

void findLeaders(int arr[],int n){
    int maxright=arr[n-1];
    printf("%d ",maxright);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxright){
            maxright=arr[i];
            printf("%d ",maxright);
        }
    }
    printf("\n");
}

int main(){
    int arr[]={16,17,8,9,34};
    int n=5;
    findLeaders(arr,n);
    return 0;
}