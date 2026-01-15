#include<stdio.h>
int main(){
    float GS, BS, DA, HRA, bonus;
    printf("Enter the base salary of the employee\n");
    scanf("%f", &BS);
    DA = 0.4*BS;
    HRA = 0.8*DA;
    bonus = 0.25*HRA;
    GS = BS+DA+HRA+bonus;
    printf("The gross salary of the employee is %.2f", GS);
    return 0;
 }