#include<stdio.h>
int main(){
    int a,b,c,d,sum;
    printf("Enter a three digit number:\n");
    scanf("%d", &a);
    b=a%100; //a=111 then b will be 11 
    c=b/10; //b=11 this implies c=1 (second digit)
    d=a%10; //if a=111 then c will be equal to 1 which is the last digit
    sum= (a/100)+c+d;
    printf("The sum of digits of the given number is %d", sum);
    return 0;
}