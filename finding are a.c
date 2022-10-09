#include <stdio.h>

float rectangleArea(float a, float b);
float circleArea(float r);

int main()
{   float a;
    float b;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("%f",rectangleArea(a,b));

    return 0;
}

float rectangleArea(float a, float b){
  return a*b;
}

float circleArea(float r){
    return 3.14*r*r;
}