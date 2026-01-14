#include<stdio.h>
int main(){
    int i=5,*j;
    j = &i;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The address of i is %u\n", j);
    printf("The address of i is %u\n", &i);
    return 0;
    }