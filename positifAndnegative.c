#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[5],c,ne,p;
    ne=0;
    p=0;
    printf("input the first number : \n");
    scanf("%d",&n[0]);
    printf("input the second number : \n");
    scanf("%d",&n[1]);
    printf("input the third number : \n");
    scanf("%d",&n[2]);
    printf("input the fourth number : \n");
    scanf("%d",&n[3]);
    printf("input the fifth number : \n");
    scanf("%d",&n[4]);
    for(c=0;c<5;c++){
        if(n[c]<0){
            ne++;
        }else p++;
    }
    printf("Number of positive numbers : %d\n",p);
    printf("Number of negative numbers : %d\n",ne);

    return 0;
}