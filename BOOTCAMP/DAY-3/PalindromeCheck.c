#include<stdio.h>
#include<string.h>

int ispalindrome(char str[],int left,int right){
    if(left>=right) return 1;
    if(str[left]!=str[right]) return 0;
    return ispalindrome(str,left+1,right-1);
}
int main(){
    char str[]="NAMAN";
    if(ispalindrome(str,0,strlen(str)-1))
    printf("palindrome\n");
    else
    printf("not a palindrome\n");
    return 0;

}