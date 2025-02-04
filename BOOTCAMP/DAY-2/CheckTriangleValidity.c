#include<stdio.h>
#include<stdbool.h>
bool valid(int a,int b,int c){
   if( a+b+c==180 && a!=0 && b!=0 && c!=0){
       return true;
   }else{
    return false;
   }
}
int main(){
    int a=10,b=80,c=90;
    if(valid(a,b,c)){
        printf("triangle is valid");
    }else{
        printf("triangle is not valid");
    }
    return 0;
}