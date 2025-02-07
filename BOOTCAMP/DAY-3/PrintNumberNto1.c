#include<stdio.h>

void printNumbersReverse(int n){
    for(int i=n;i>=1;i--){
        printf("%d",i);
        printf("\n");
    }
}
int main(){
    int n=10;
    printNumbersReverse(n);
    return 0;
}