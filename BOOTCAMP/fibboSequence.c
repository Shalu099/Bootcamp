#include<stdio.h>

int fibb(int n){
     if(n==0)
     return 0;
     else if(n==1)
     return 1;
     else 
     return fibb(n-1)+fibb(n-2);
}
int main(){
    int n=10;
    printf("Fibbonaci sequence:%d",fibb(n));
    return 0;
    return 0;
}