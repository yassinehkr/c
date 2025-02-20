#include <stdio.h>
#include <stdlib.h>

int main(){
 int n1, n2;
printf("Input the first number : \n");
scanf("%d",&n1);
printf("Input the second number : \n");
scanf("%d",&n2);
if(n1%n2==0||n2%n1==0){
    printf("Muliplied!");
}else printf("Not Multiplied!");
    return 0 ;
}