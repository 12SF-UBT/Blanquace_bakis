#include<stdio.h>
#include<math.h>
void main() {
    //Following program is a power calculator (a^n).
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("CALCULATOR a^n\n");
    printf("Choose a:");
    float a,n;
     scanf("%f", &a);
    printf("Choose n:");
     scanf("%f", &n);
         int power = pow(a,n); 
          printf("a^n=%d\n",power);
    printf("___________________________________________\n"
           "-------------------------------------------\n"
           "********************************************\n");
    ;
}