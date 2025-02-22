#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Even numbers between 1 to 50 (inclusive)\n");
    for(n=1;n<=50;n++){
        if(n%2==0){
            printf("%d ",n);
        }
    }
    return 0;
}