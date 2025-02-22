#include <stdio.h>
#include <stdlib.h>

int main(){
    int p;
    printf("Input the password : \n");
    scanf("%d",&p);
    switch (p)
    {
    case 1234:
        printf("Correct password");
        break;
    
    default:
        printf("Incorrect password");
        break;
    }
    return 0;
}