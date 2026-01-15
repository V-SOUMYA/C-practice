#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter a four digit number:");
    scanf("%d",&a);
    b = a/1000; //first digit
    c = a%10; //if a=1234 then c=4
    sum = b+c;
    printf("Sum of first and last digit of the given number is %d", sum);
    return 0;
}