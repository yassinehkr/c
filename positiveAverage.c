#include <stdio.h>
#include <stdlib.h>

int main(){
    int nb[5],c,p=0,s=0;
    double a=0;
    printf("Input the first number : \n");
    scanf("%d",&nb[0]);
    printf("Input the second number : \n");
    scanf("%d",&nb[1]);
    printf("Input the third number : \n");
    scanf("%d",&nb[2]);
    printf("Input the fourth number : \n");
    scanf("%d",&nb[3]);
    printf("Input the fifth number : \n");
    scanf("%d",&nb[4]);
    for(c=0;c<5;c++){
        if(nb[c]>0){
            p++;
            s = s+nb[c];
        }
        
    }
    a = s/p;
    printf("Number of positive numbers : %d\n",p);
    printf("Average value of the said positive numbers : %lf", a);
    return 0;
}