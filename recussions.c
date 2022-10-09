#include<stdio.h>//in recussion fn calls itself 
//its work is similar to loop , we just have to find out the more effective way
void hello(int n);

int main(){
   int n;
    scanf("%d", &n);
    hello(n);

    return 0;
}

void hello(int n){
    if(n==0){
        return;
    }
    printf("hello\n");
    hello(n-1);
}
