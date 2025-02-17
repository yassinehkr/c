#include <stdio.h>

int main(){
    printf("Enter Your Grade : \n");
    char grade ;
    scanf("%c",&grade);
    switch(grade){
        case 'A' :
            printf("You Did Great!");
            break;
        case 'B' :
            printf("You Did Alright!");
            break;
        case 'C' :
            printf("You Did Poorly!");
            break;
        case 'D' :
            printf("You Did Bad!");
            break;
        case 'E' :
            printf("You Did Very Bad!");
            break;
        case 'F' :
            printf("You Failed!");
            break;
        default :
            printf("Invalid Grade");
            break;

    }
    return 0;

}