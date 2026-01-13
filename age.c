#include<stdio.h>
int main(){
    int r,s,a;
    printf("Enter the ages of \nRam:\nShyam:\nAjay:\n");
    scanf("%d %d %d", &r,&s,&a);
    if (r>s && s>a){
        printf(" Ajay is the youngest");
    }
    else if(s>a && a>r){
        printf("Ram is the youngest");
    }
    else{
        printf("Shyam is the youngest");
    }
    return 0;
}