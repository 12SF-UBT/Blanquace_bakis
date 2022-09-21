#include<stdio.h>
#include<math.h>
int main(){
    //THis code check if the number is divisible by 2 or not
    /*We'll get the result oncle we type in the value of the float variable
    a is a variable*/
    int a ;
    printf(" Type the value of variable a:");
    scanf("%d",&a);
    printf("%d", a % 2 == 0);
    return 0;
}