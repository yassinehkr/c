#include <stdio.h>
#include <stdlib.h>

int main(){
    int sq[101],max,n,i,maxIndex=0,before=0,after=0;
    printf("Enter the number of integers you want to put : \n");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid Input\n");
        return 1;
    }
    printf("Enter the numbers in the sequence : \n");
    for(i=0;i<n;i++){
        scanf("%d",&sq[i]);
        if(i==0 || sq[i]>max){
            max=sq[i];
            maxIndex=i;
        }
    }
    for(i=0;i<maxIndex;i++){
            before+=sq[i];
        }
    for(i=maxIndex+1;i<n;i++){
            after+=sq[i];
    }
    printf("Sum before maximum value :%d\nSum after maximum value : %d\n",before,after);

    return 0;
}