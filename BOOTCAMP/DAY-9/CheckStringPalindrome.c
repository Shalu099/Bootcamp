#include<stdio.h>
#include<string.h>

int ispalindrome(char str[]){
    int l=0,r=strlen(str)-1;
    while(l<r){
        if(str[l]!=str[r])
        return 0;
        l++;
        r--;
    }
    return 1;
}
int main(){
    char str[]="madam";
    printf("%s is %s palindrome\n",str,ispalindrome(str)?"a":"not a");
    return 0;
}