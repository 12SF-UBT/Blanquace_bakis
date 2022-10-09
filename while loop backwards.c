#include<stdio.h>
int main() {
    //printing numbers in backwards
    int a=1,b;
    scanf("%d", &b);
    while (b>=a){
      printf("%d\n", b);
      b-=a;}
    return 0;
}
