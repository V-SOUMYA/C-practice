#include<stdio.h>
int main(){
    int i,n,sum=0;
    float avg;
    printf("Enter no. of terms: ");
    scanf("%d", &n);
    for ( i = 0; i <= n ; i++)
    {
        sum+=i;
    }
    printf("The sum of n number is %d\n",sum);
    avg=(sum)/n;
    printf("The average of n numbers is %.2f", avg);
    return 0;
}