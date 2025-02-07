#include<stdio.h>
int main(){
    int a[4][4]={1,2,3,4,5,6,7,8,9,0,6,5,4,3,2,1};
    int t[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            t[j][i]=a[i][j];
        }
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                printf("%d ",t[i][j]);
            }
            printf("\n");
        }
    return 0;
}

