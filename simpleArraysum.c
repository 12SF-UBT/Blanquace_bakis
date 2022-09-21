#include<stdio.h>

void simpleArraySum(){
 int n, t=0;
 scanf("%d",&n);
 while (n>=0){
     scanf("%d",&t);
     t=t+t;
     n--;
 }
     
}
int main(){
    simpleArraySum();
    return 0;
}
