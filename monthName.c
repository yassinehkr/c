#include <stdio.h>
#include <stdlib.h>

int main(){
int m;
printf("Input a number between 1 to 12 to get the month name : \n");
scanf("%d",&m);
if(m<1||m>12){
    printf("invalid month number !!");
}else{
    switch (m)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("Fabruary");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("Juin");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("Semptember");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    
    default:
        break;
    }
}

    return 0; 
}