/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()//program for deciding thhat a student is pass or fail.
//can do this if else and by ternary operator.

{
    float m;
    printf("wrte your marks out of 100:");
    scanf("%f",&m);/*
    if(m<30){printf("PADH LE FAIL HAI TU!");}
    else if(m>=30 && m<=35){printf("just pass hone ke liye hi pdha tha kya? ");}
    else if ( m>=31 && m<50){printf("bohot gndi performance");}
    else if(m>=50 && m<65){printf("Pass");}
    else if(m>=65 && m<80){printf("can do better beta");}
    else if(m>=80 && m<90){printf("Bss thodi or mehanat kro top kr loge agli baar");}
    else if(m>=90 && m<99.9){printf("baaki ke marks kha gae kya ?!");}
    else if (m=100 ){printf("paper pta tha na aapko?");}
    */

 m<=30 ? printf("fail"):printf("pass");
 return 0;
}
