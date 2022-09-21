#include<stdio.h>
int main(){
    /* Homework questions
    A.finding the average of a,b,c.
    B.program to check wether if given character is a digit or not.
    C. program to print the smallest number.*/

    //A.
    float a,b,c;
      printf("A.\n");
         printf("Type the value of a:");
         scanf("%f",&a);
         printf("Type the value of b:");
         scanf("%f",&b);
         printf("Type the value of c:");
         scanf("%f",&c);
             printf("The average of a,b,c is = %f \n"
                    "******************************************\n", (a+b+c)/3);
      
      
    printf("************************************************** \n");
    

     //B.
    float y;
    printf("This program will check wether a character is digit or not ; Type anything:");
    scanf("%f",&y);//result will show '0' if the typed value is not a digit.
    printf("your result : %f \n",y);
    printf("The result will show 0 if the typed value is not a digit\n"
           "and will show the typed value if its a digit. \n");


       //C
     float d,e,f;
             printf("Type the value of d:" );
              scanf("%f",&d);
             printf("Type the value of e:");
              scanf("%f",&e);
             printf("Type the value of f:" );
              scanf("%f",&f);
     if(d<e){
             printf("d=%f is smallest.",d);}
     else{
             printf("e=%f is the smallest.",e);}
    return 0;
}