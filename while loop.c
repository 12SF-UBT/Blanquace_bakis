#include<stdio.h>
int main() {
    int i=1 ,s;
  //  printf("Type a number upto which you want to print:");
    scanf("%d", &s);
    while(i<=s){
        printf("%d\n",i);
        i++;
    }

    //using for loop
    int h;
    scanf("%d",&h);
    for (int a=1 ; a<=h ; a++ ){
      printf("%d \n", a);
    }

    //printing numbers in backwards
    int a=1,b;
    scanf("%d", &b);
    while (b>=a){
      printf("%d \n", b);
      b-=a;
    }
    return 0;

}