#include<stdio.h>
int main(){
int i=2,n;
printf("Enter a number: ");
scanf("%d",&n);
 while (i<n)
 {
    if (n%i==0)
    {
        printf("Not a prime number");
        break;
    }
    i++;
 }
    if (i==n)
    {
        printf("A prime number");
    }
    return 0;
}