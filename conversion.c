#include<stdio.h>
int main(){
    int km,m,cm,ft,in;
    printf("Enter the distance between two cities in km:");
    scanf("%d", &km);
    m = km*1000;
    cm = km*100000;
    ft = km*3280;
    in = km*39370;
    printf("The distance in metre is %d\nThe distance in centimetre is %d\nThe distance in feet is %d\nAnd the distance in inches is %d", m,cm,ft,in);
    return 0;
}