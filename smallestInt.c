#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter number of integers : \n");
    scanf("%d", &n);
    if(n<0) {
        printf("Enter a postive number!");
    }else if (n == 0){
        printf("Seriously No inputs!");
    }else{
    int nb[n],freq[n],i,j;
    printf("Enter integers : \n");
    for(i=0;i<n;i++){
        scanf("%d",&nb[i]);
        freq[i]=0;
        if(nb[i]<0){
            printf("Enter only positve numbers!");
            return 1;
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(nb[i]==nb[j]){
                freq[i]++;
            }
        }
    }
    int minFreq=n;
    int result = 0;
    for(i=0;i<n;i++){
        if(freq[i]<minFreq){
            minFreq=freq[i];
            result=nb[i];
        }else if(freq[i]== minFreq && nb[i]<result){
            result = nb[i];
        }
    }
    printf("The number with the least frequency is : %d \n",result);
    }

    return 0 ;
}