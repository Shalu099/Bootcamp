#include<stdio.h>

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
    
}
int main(){
    int n1=10,n2=18;
    printf("GCD:%d\n",gcd(n1,n2));
    return 0;
}