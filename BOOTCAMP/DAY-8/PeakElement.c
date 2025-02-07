#include<stdio.h>

int findPeak(int arr[],int n){
    for(int i=0;i<n;i++)
    if((i==0||arr[i]>=arr[i-1])&&(i==n-1||arr[i]>=arr[i+1]))
    return arr[i];
    return -1;

}
int main(){
    int arr[]={1,3,20,4,1,0};
    int n=6;
    printf("Peak element:%d\n",findPeak(arr,n));
    return 0;
}