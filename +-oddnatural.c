
#include<stdio.h>
int main(){
    int a;
    printf("Type any intiger:");
    scanf("%d",&a);
         if(a>0){
            printf("The number is positive.\n");
             if(a%2==0){
                printf("THe number is even\n");
            }
             else {
                printf("The number is odd.\n");}         
        }
         else {printf("The intiger is negative.\n");
    
             if(a%2==0){
                 printf("The number is even negative intiger.\n");}
             else {printf("The number is an odd negative intiger.\n"); }
         }
    return 0;
}