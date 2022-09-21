/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
 int main(){
     //This program will tell us the days, if 1=sunday 2 monday...
     int day;
         printf("This program will tell about days in a week.\n"
                "Type any number from 1-7 \n");
             scanf("%d",&day);
             
         switch(day){ 
                     case 1 :  printf("sunday");
                     break;
                     
                     case 2 :  printf("monday");
                     break;
                     
                     case 3 :  printf("tuesday");
                     break;
                     
                     case 4 :  printf("wednesday");
                     break;
                     
                     case 5 :  printf("thursday");
                     break;
                     
                     case 6 :  printf("friday");
                     break;
                     
                     case 7 :  printf("saturday");
                     break;
                     
                     default : printf("Not a valid day");
                    };
    return 0;}
