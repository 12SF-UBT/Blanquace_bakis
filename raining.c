#include<stdio.h>
int main(){
    //This is a true and false code
    int a ;//'a' defines the condition that its sunday.
    int b ;//'b' defines the condition that its snowing.
    
    printf("Type '1' or else write '0' if its sunday:");
    scanf("%d",&a);
    printf("Type '1' or else write '0' if its snowing:");
    scanf("%d",&b);/*if if its sunday(a) and snowing(b) then it'll show true (1)
    and if one of them has an innput of (0) then whole statement will be false(0)*/
    printf("%d \n", a && b);

   
 //This is another true and false code
int m;//m is for monday
int r;//r is for raining
printf("If its monday , type 1 or else type 0:");
scanf("%d", &m);
printf("If its raining then type 1 or else type 0:");
scanf("%d", &r);
printf("%d \n", m || r);/*even if one of them is true i.e. has value of (1)
                          Then the final result will be true(1)*/

 //TO check weather the number written is greater than 9 and less than 100.
int c;
printf("Type the number:");
scanf("%d", &c);
printf("%d", c<=100 && c>=9);/*here one imp thing to remember is that the variable will 
                             alqays come 1st in order for this to work*/
    return 0;
}