#include<stdio.h>
int main() { 
    // The folling code turns a to a^3
    /* float a is a variable
    the cube will be done after putting the value of a */
    int c , i=1;
    while (i==1) {
        printf("Enter your choice: ");
        scanf("%d",&c);
       if (c==1){
        float a;
     printf("Type the value of a:");
        scanf("%f", &a);
    printf("The cube of a is %f \n ", a*a*a);}
    else if (c!=1){i=0;break;}
    }return 0;}