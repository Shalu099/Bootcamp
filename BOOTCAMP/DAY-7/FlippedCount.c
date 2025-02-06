#include<stdio.h>
int main(){
    int a=10;
    int b=6;
    int c=a^b;
    int count=0;
    while(c){
        c=c&(c-1);
        count++;
    }
    printf("%d",count);
    return 0;
}