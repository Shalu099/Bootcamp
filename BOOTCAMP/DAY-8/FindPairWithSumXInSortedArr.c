#include<stdio.h>

void findpair(int arr[],int n,int x){
    int l=0,r=n-1;
    while(l<r){
        int sum=arr[l]+arr[r];
        if(sum==x){
            printf("Pair:(%d,%d)\n",arr[l],arr[r]);
            return;
        }
        (sum<x)?l++:r--;
    }
    printf("no pair found\n");

}
int main(){
    int arr[]={1,2,4,7,11,15};
    int x=5;
    int n=6;
    findpair(arr,n,x);
    return 0;
}