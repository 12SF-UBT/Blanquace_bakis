#include<stdio.h>
int main(){ // in the following program we'll only print odd numbers and skip the even ones
 
   do{printf("Type the value :");
    int a,i;
    scanf("%d", &a);
    for (i=1; i<=200; ++i){
        if(a%2==0){
            a++ ;
            printf("%d", a);
            continue;
            if(a<=200){
                break ;}
            }

                    }   
    

  }while(1);


    return 0;
}