/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main(){
    // Progarm to check werher the entered character is uper case or lower case
    char c;
    printf("Type the value of char:");
    scanf("%s",&c);// I commented out the code because it was ineffecient and wrong
    /*c=A ? printf("UPPER CASE"): printf (lowercase);
    c=B ? printf("UPPER CASE"): printf (lowercase);
    c=C ? printf("UPPER CASE"): printf (lowercase);
    c=D ? printf("UPPER CASE"): printf (lowercase);
    c=E ? printf("UPPER CASE"): printf (lowercase);
    c=F ? printf("UPPER CASE"): printf (lowercase);
    c=G ? printf("UPPER CASE"): printf (lowercase);
    c=H ? printf("UPPER CASE"): printf (lowercase);
    c=I ? printf("UPPER CASE"): printf (lowercase);
    c=J ? printf("UPPER CASE"): printf (lowercase);
    c=K ? printf("UPPER CASE"): printf (lowercase);
    c=L ? printf("UPPER CASE"): printf (lowercase);
    c=M ? printf("UPPER CASE"): printf (lowercase);
    c=N ? printf("UPPER CASE"): printf (lowercase);
    c=O ? printf("UPPER CASE"): printf (lowercase);
    c=P ? printf("UPPER CASE"): printf (lowercase);
    c=Q ? printf("UPPER CASE"): printf (lowercase);
    c=R ? printf("UPPER CASE"): printf (lowercase);
    c=S ? printf("UPPER CASE"): printf (lowercase);
    c=T ? printf("UPPER CASE"): printf (lowercase);
    c=U ? printf("UPPER CASE"): printf (lowercase);
    c=V ? printf("UPPER CASE"): printf (lowercase);
    c=W ? printf("UPPER CASE"): printf (lowercase);
    c=X ? printf("UPPER CASE"): printf (lowercase);
    c=Y ? printf("UPPER CASE"): printf (lowercase);
    c=Z ? printf("UPPER CASE"): printf (lowercase);*/

    // the right way to do this is given here

    if(c>='A' && c<='Z'){ printf("UPPER CASE");}
    else if (c>='a' && c<='z'){printf("lowercase");}
    else { printf("enrtered value is not a character");}
    return 0;
}