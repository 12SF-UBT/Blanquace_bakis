#include<stdio.h>
int main(){
    // rectangle perimeter calculator
    /*the variables a and b are the sides of the rectangle.
    The perimeter will come once we type the value of a and b */
    float a , b ;
    printf("Type the value of a: \n");
    scanf("%f", &a);
    printf("Type value of b: \n ");
    scanf("%f", &b);
    printf("The perimeter is %f \n" , 2*a+2*b );
    return 0;
}