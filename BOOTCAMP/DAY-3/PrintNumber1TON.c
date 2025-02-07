#include<stdio.h>

void printnumber(int n){
    for(int i=1;i<=n;i++){
        printf("%d ",i);
            printf("\n");

    }
}
int main(){
    int n=10;
    printnumber(n);
    return 0;
}