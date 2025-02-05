#include<stdio.h>

int factorial(int n){
   // int f=1;
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main(){
    int n=3;
    printf("%d",factorial(n));
    return 0;
}