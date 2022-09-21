#include <stdio.h>
int main (){
    int age;
    printf("Write your age:");
    scanf("%d", &age);
        if(age<18){
        printf("You are a fucking kid.\n"
               "Or you are an adolocent.\n");
                  }
        else      {
        printf("You are a baby with big body\n");
                    };

    /*Other way toshorten if else else if statements is to use TERNARY operator.
      it helps us to be more time effeicient.*/

    int aayu;
             printf("Write your age:");
             scanf("%int", &aayu);
             //using ternary
         aayu>=18 ? printf("The candidate is elegible for driving licence"):printf("NOT ELEGIBLE");
    return 0       ;         
    }