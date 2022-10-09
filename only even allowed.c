 #include<stdio.h>
 int main(){// if the number typed value is odd then the program will stop
     do{ 
         int a ;
         printf("Type any number");
         scanf("%d", &a);
         printf("%d \n",a);
         
         if(a%2!=0){
             break;
         }
         
        
     }while(1);
     
     printf("Thankyou");
     
     
     return 0;
 }