#include<stdio.h>//program for printing hello acc. to region of the person
void namaste();//INITIATION
void jai();
void bonjour();
void ola();
void hi();
void konechiva();

int main(){//calling the function
    char ch;
   printf("type i for hindi\n");
   printf("type h for himachali\n");
   printf("type f for franch \n");
   printf("type s for spanish\n");
   printf("type e for english\n");
   printf("type j for japanese\n");
    
    scanf("%c", &ch);
    if (ch=='i'){namaste();}
    if (ch=='h'){jai();}
    if (ch=='f'){bonjour();}
    if (ch=='s'){ola();}
    if (ch=='e'){hi();}
    if (ch=='j'){konechiva();}
   

    return 0;
}

void namaste(){printf(" namaste");} 
void jai(){printf("jai jai");}
void bonjour(){ printf("bonjour");}
void ola(){ printf("ola");}
void hi(){ printf("hii");}
void konechiva(){printf("konecheva");}


