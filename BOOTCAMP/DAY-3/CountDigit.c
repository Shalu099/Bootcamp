#include<stdio.h>

int countdigit(int n){
    if(n==0) return 0;
    return 1+countdigit(n/10);
}
int main(){
    int num=19023;
    printf("Number of digits:%d\n",countdigit(num));
    return 0;
}