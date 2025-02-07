#include<stdio.h>
int maxEvenOddSubarr(int a[],int n){
    int maxlength=1,currentlen=1;
    for(int i=1;i<n;i++){
        if((a[i]%2==0 && a[i-1]%2!=0)||(a[i]%2!=0&&a[i-1]%2==0)){
            currentlen++;
            if(currentlen>maxlength)
            maxlength=currentlen;


        }else{
            currentlen=1;
        }
    }
    return maxlength;
}
int main(){
    int arr[]={5,10,20,6,3,8,7,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Maximum length of even and odd subarray:%d\n",maxEvenOddSubarr(arr,n));
    return 0;
}