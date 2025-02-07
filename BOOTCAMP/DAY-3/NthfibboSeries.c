#include<stdio.h>
int fibb(int n){
    if(n<=1)return n;
    return fibb(n-1)+fibb(n-2);
}
int main(){
    int n=10;
    printf("The %dth fibbonacci term is %d\n",n,fibb(n));

    return 0;
}