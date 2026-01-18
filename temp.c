#include<stdio.h>
int main(){
    float F,C;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f", &F);
    C=(F-32)/1.8;
    printf("The temperature in Celcius is: %.2f", C);
    return 0;

}