#include<stdio.h>
int main(){// if seven is printed then the program will stop
    int s;
do{printf("Type any number:");
scanf("%d", &s);
printf("%d\n",s);

if (s%7==0){
    break;
}

}while(1);

    return 0;
}