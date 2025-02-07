#include<stdio.h>

void findtriplet(int arr[],int n,int x){
    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1;
        while(l<r){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum==x){
                printf("Triplet:(%d,%d,%d)\n",arr[i],arr[l],arr[r]);
                return ;
            
            }
            (sum<x)?l++:r--;
        }
    }
    printf("no triplet found\n");
}
int main(){
  int arr[]={1,2,3,4,5,6,8,10};
  int x=16;
  int n=sizeof(arr)/sizeof(arr[0]);
  findtriplet(arr,n,x);
    return 0;
}