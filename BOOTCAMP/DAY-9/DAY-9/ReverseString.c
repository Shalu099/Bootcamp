#include <stdio.h>
#include <string.h>

void reversestring(char str[],int s,int e){
    if(s>=e)
    return;
    char temp=str[s];
    str[s]=str[e];
    str[e]=temp;

    reversestring(str,s+1,e-1);
}
int main()
{
    char str[] = "hello";
    int len=strlen(str);
    reversestring(str,0,len-1);
    printf("reverse string:%s\n", str);
    return 0;
}