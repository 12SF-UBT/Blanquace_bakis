#include<stdio.h>
float main() { //Following is the program to find the area of a square.
/*Here int a is the side of the square
and the result will be shown once we type the value of a. */

    printf("Type side of square in cm.");
    float a;
    scanf( "%f",&a);
    printf("The area of square is %f cm. \n", a*a);
    return 0 ;
}