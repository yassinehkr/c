#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[5],c,h=0,p;
printf("Input 5 integers : \n");
scanf("%d",&n[0]);
scanf("%d",&n[1]);
scanf("%d",&n[2]);
scanf("%d",&n[3]);
scanf("%d",&n[4]);
for(c=0;c<5;c++){
    if(n[c]>h){
        h=n[c];
        p=c+1;
          
    }
}
printf("Highest value : %d\nPostion : %d\n",h,p);


    return 0;
}