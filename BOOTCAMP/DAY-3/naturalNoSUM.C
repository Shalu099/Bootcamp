#include<stdio.h>
int main(){
    int n=10,sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
        printf("%d ",i);
    }
    printf("\nsum:%d",sum);
    return 0;
}