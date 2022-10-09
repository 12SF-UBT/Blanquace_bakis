#include<stdio.h>
//to print the sum of n natural numbers
int sum(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    //sum(n);

    return 0;
}

int sum (int n){
    if(n==1){
        return 1;
    }
    int sumnm1= sum(n-1);
    int sumn= sumnm1+n;
    //printf("%d",sum());
    
}