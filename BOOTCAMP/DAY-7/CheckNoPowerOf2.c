#include<Stdio.h>

int ispoweroftwo(int n){
    return ((n>0)&&(n&(n-1))==0);

}
int main(){
    int n=4;
    if(ispoweroftwo(n))
    printf("%d is a power of 2.\n",n);
    else
    printf("%d is not a power of 2.\n",n);

    return 0;
}