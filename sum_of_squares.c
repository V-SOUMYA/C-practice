#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter a number:\n");
    scanf("%d",&n);
    sum=n*(n+1)*((2*n)+1)/6;
    printf("The sum of square of n natural numbers is %d", sum);
    return 0;
    
}