
#include <stdio.h>

int main()
{
    //C
     float d,e,f;
             printf("Type the value of d:" );
             scanf("%f",&d);
    if("%f",d){
     
             printf("Type the value of e:");
              scanf("%f",&e);
             printf("Type the value of f:" );
              scanf("%f",&f);
            if(d<e && d<f && e<f){
             printf("d=%f<e<f\n",d);}
            if(d<f && d<e && f<e){
             printf("d=%f<f<e\n",d);}
            if(e<d && e<f && d<f){
             printf("e=%f<d<f\n",e);}
            if(e<f && e<d && f<d){
             printf("e=%f<f<d\n",e);}         
            if(f<d && f<e && d<e){
             printf("f=%f<d<e\n",f);}
            if(f<e && f<d && e<d){
             printf("f=%f<e<d\n",f);}
             
              }
                   
               
     else                 {
         printf("!Error!");}

    return 0;
}