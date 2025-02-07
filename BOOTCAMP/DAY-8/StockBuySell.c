#include<stdio.h>
int maxProfit(int price[],int n){
    int minPrice=price[0],maxProfit=0;
    for(int i=1;i<n;i++){
        if(price[i]<minPrice)
        minPrice=price[i];
   else if (price[i]-minPrice>maxProfit)
   maxProfit=price[i]-minPrice;
   
    }
    return maxProfit;
}
int main(){
    int p[]={7,1,5,3,6,4};
    int n=6;
    printf("Max profit:%d\n",maxProfit(p,n));
    return 0;

}