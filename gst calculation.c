#include<stdio.h>
void calculate(float value);
int main(){

    float value;
    scanf("%f", &value);
    calculate(value);
    return 0;
}

void calculate(float value){
    value = value+(0.18*value);
    printf("%f",value);

}