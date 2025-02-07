#include<stdio.h>

int findMaxConsecutiveOnes(int arr[],int n){
    int maxcount=0,currentcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            currentcount++;
            if(currentcount>maxcount)
                maxcount=currentcount;
            }else{
                currentcount=0;
            }
        }

    
    return maxcount;
}
int main(){
    int a[]={1,1,1,0,0,1,1,0,1,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    int maxones=findMaxConsecutiveOnes(a,n);
    printf("Maximum Consecutive is: %d\n",maxones);

    return 0;
}