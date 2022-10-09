#include<stdio.h>
int main(){

    char name[200];
    //scanf("%s", name);// this is for scanning a string without spaces
    fgets(name , sizeof(name), stdin);// fgets is for scanning a function with spaces
    puts(name);//puts acts like wholesaler whereas printf is retailer
    //printf("%s", name);
    return 0;
}