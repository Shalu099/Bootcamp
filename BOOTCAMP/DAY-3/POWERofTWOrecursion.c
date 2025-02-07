#include<stdio.h>

int powerOFtwo(int n){
    if(n==0) return 1;
    return 2*powerOFtwo(n-1);
}
int main(){
    int n=10;
    printf("2^%d=%d\n",n,powerOFtwo(n));
    return 0;
}