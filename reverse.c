#include<stdio.h>
int main(){
    int a,p,q,r,s,b;
    printf("Enter a three digit number:");
    scanf("%d", &a);
    p=a/100; //if a=123 then p=1 which is the first digit
    q=a%100; //q=23
    r=q/10; //r=2 which is the second digit
    s=a%10; //a/10 implies 123/10=12 and the reminder is 3 which is the last digit
    b= s*100 + r*10 + p;
    printf("The number we get after reversing the give number is: %d", b);
    return 0;
}