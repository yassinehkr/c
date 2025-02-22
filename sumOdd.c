#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1=0,n2=0,on,c,sum=0;
    printf("Input first number of the pair : \n");
    scanf("%d",&n1);
    printf("Input second number of the pair : \n");
    scanf("%d",&n2);
    if(n1>n2){
        for(c=n2;c<n1;c++){
            if(c%2 != 0){
                printf("%d \n",c);
                sum = sum + c;
            }
            
        }
        
    }else if(n1<n2){
        for(c=n1;c<n2;c++){
        if(c%2 != 0){
            printf("%d \n",c);
            sum = sum + c;
            }
            
        }
    }
    printf("Sum=%d",sum);
    
    return 0;
}
