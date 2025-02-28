#include <stdio.h>
#include <stdlib.h>

int largest(int x, int y, int z){
    if((x >= y && x <= z) || (x <= y && x >=z)){
        return 1;
    }else return 0;
}

int main(){
    int x, y, z;
    printf("Enter 3 numbers : \n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(largest(x,y,z)){
        printf("The second largest number is : %d",x);
    }else if(largest(y,x,z)){
        printf("The second largest number is : %d",y);
    }else printf("The second largest number is : %d", z);


    return 0;
}