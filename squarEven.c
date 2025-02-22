#include <stdio.h>
#include <stdlib.h>

int main(){
int n,v,c;
scanf("%d",&v);
printf("List of square of each one of the even values from 1 to a %d",v);
for(c=0;c<=v;c++){
    if(c%2==0){
        printf("%d^2=%d \n",c,c*c);
    }
}
    return 0;
}