#include <stdio.h>

int main() {
	int R1,R2,R3,R4;
    scanf("%d",&R1);
    scanf("%d",&R2);
    scanf("%d",&R3);
    scanf("%d",&R4);
    if (R1==0 && R2==0 && R3==0 && R4==0){printf("in");}
    else if(R1==0 && R2==0 && R3==0 && R4==1) {printf("in");}
    else if(R1==0 && R2==0 && R3==1 && R4==0) {printf("in");}
    else if(R1==0 && R2==1 && R3==0 && R4==0) {printf("in");}
    else if(R1==1 && R2==0 && R3==0 && R4==0) {printf("in");}
    else if(R1==0 && R2==0 && R3==1 && R4==1) {printf("out");}
    else if(R1==0 && R2==1 && R3==1 && R4==0) {printf("out");}
    else if(R1==1 && R2==1 && R3==0 && R4==0) {printf("out");}
    else if(R1==0 && R2==1 && R3==0 && R4==1) {printf("out");}
    else if(R1==1 && R2==0 && R3==1 && R4==0) {printf("out");}
    else if(R1==1 && R2==0 && R3==0 && R4==1) {printf("out");}
    else if(R1==0 && R2==1 && R3==1 && R4==1) {printf("out");}
    else if(R1==1 && R2==0 && R3==1 && R4==1) {printf("out");}
    else if(R1==1 && R2==1 && R3==0 && R4==1) {printf("out");}
    else if(R1==1 && R2==1 && R3==1 && R4==0) {printf("out");}
    else if(R1==1 && R2==1 && R3==1 && R4==1) {printf("out");}
                    
                       
    
    //if(T>=1 && T<=20 && R1>=0 && R2>=0 && R3>=0 &&R4>=0  && R1<=1 && R2<=1 && R3<=1 && R4<=1){
    
/*switch (R1,R2,R3,R4){
    case R1==0 && R2==0 && R3==0 && R4==0 :printf("in");
    break;

    case 0001 :printf("in");
    break;
    
    case 0010 :printf("in");
    break;
    
    case 0100 :printf("in");
    break;
    
    case 1000 :printf("in");
    break;
    
    case 0011 :printf("out");
    break;
    
    case 0110 :printf("out");
    break;
    
    case 1100 :printf("out");
    break;
    
    case 0101 :printf("out");
    break;
    
    case 1010 :printf("out");
    break;
    
    case 1001 :printf("out");
    break;
    
    case 1110 :printf("out");
    break;
    
    case 1101 :printf("out");
    break;
    
    case 1011 :printf("out");
    break;
    
    case 0111 :printf("out");
    break;
    
     case R1==1 && R2==1 && R3==1 && R4==1 :printf("out");
    break;
    
    default  :printf("error");
    break;
    
    
}*/
        //else{printf("error");}
    

	
	
	
	return 0;
}

