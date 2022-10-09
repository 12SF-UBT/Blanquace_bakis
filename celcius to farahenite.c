#include<stdio.h>
void main(){//celcius to farahenite

double c, f;
scanf ("%lf", &c);
if(c==0){
f = 32+ c;
printf("%lf", f);}
else{
    f = 32+(1.8*c);
    printf("%lf", f );
}

    
}

