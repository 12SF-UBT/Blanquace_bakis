#include<stdio.h>
void main(){

float s,m,e;
printf("Type the value of s , m , e:");
scanf("%f %f %f", &s,&m,&e);

if (s<=100){
printf("science = %f \n ", s );
}

if (m<=100){
printf("maths = %f \n", m );
}

if (e<=100){
printf("english = %f \n", e );
}
else {printf("ERROR");}

}

