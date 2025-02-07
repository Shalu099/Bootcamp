#include<stdio.h>

void findFrequencies(int arr[],int n){
    int freq=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])
        freq++;
        else{
            printf("%d occurs %d times\n",arr[i-1],freq);
            freq=1;

        }
    }
    printf("%d occurs %d times\n",arr[n-1],freq);
}
int main(){
    int arr[]={1,1,2,2,2,3,3,4,4,5,5,5,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    findFrequencies(arr,n);

    return 0;
}