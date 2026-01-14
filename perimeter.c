#include<stdio.h>
int main(){
    int l,b,pr,ar;
    printf("Enter the values for lenght and breadth:\n");
    scanf("%d %d", &l,&b);
    pr = 2*(l+b);
    ar = l*b;
    if (ar>pr)
    {
        printf("Area of the rectangle is greater than its perimeter");
    }
    else
    {
        printf("Perimeter is greater than the area");
    }
    return 0;
    
}