#include<stdio.h>

int sumofDigit(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n=25;
    printf("Sum of digit:%d\n",sumofDigit(n));
    return 0;
}