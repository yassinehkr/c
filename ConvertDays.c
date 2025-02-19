#include <stdio.h>
#include <stdlib.h>

int main(){
int nb,y,w,d;
printf("Number of days : ");
scanf("%d",&nb);
y= nb/365;
w = (nb%365)/7;
d = ((nb%365)%7);
printf("Years : %d \nWeeks: %d \nDays: %d ",y,w,d);


    return 0 ; 
}