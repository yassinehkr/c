#include <stdio.h>
#include <stdlib.h>

int main(){
    float n[3],p=1;
    int a=0;
    
    printf("Input the first number : \n");
    scanf("%f",&n[1]);
    printf("Input the second number : \n");
    scanf("%f",&n[2]);
    printf("Input the third number : \n");
    scanf("%f",&n[3]);
    if(n[1]+n[2]>n[3]&&n[1]+n[3]>n[2]&&n[2]+n[3]>n[1]){
        p = n[1]+n[2]+n[3];
        printf("Perimeter = %f", p);
    }else{
        printf("It's not possible to creat a Traingle.");
    }
    

    return 0 ;
}