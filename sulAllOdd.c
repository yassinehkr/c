#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[5],sum,a;
    sum =0;
    a=0;
    printf("Input the first number : \n");
    scanf("%d",&n[0]);
    printf("Input the second number : \n");
    scanf("%d",&n[1]);
    printf("Input the third number : \n");
    scanf("%d",&n[2]);
    printf("Input the fourth number : \n");
    scanf("%d",&n[3]);
    printf("Input the fifth number : \n");
    scanf("%d",&n[4]);
    for(a;a<5;a++){
        if(n[a]%2 != 0){
            sum=sum+n[a];
        }
    }
        
    printf("Sum of all odd values : %d",sum);
    return 0;
}