#include<stdio.h>
#include<string.h>

void findduplicates(char str[]){
    int freq[256]={0};

    for(int i=0;str[i]!='\0';i++)
    freq[(int)str[i]]++;
    printf("DUPLICATES CHARACTERS:");
    for(int  i=0;i<256;i++)
    if(freq[i]>1) printf("%c ",i);
    printf("\n");
}
int main(){
    char str[]="programming";
    findduplicates(str);
    return 0;
}