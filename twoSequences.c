#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1[101],n2[101],res[101],size1=0,size2,i,j,indexsize=0,temp;
    printf("Enter the number of integers you want to put first sequence: \n");
    scanf("%d",&size1);
    printf("Enter the numbers : \n");
    for(i=0;i<size1;i++){
        scanf("%d",&n1[i]);
    }
    printf("Enter the number of integers you want to put second sequence : \n");
    scanf("%d",&size2);
    printf("Enter the numbers : \n");
    for(i=0;i<size2;i++){
        scanf("%d",&n2[i]);
    }
    for(i=0;i<size1;i++){
        for(j=0;j<size2;j++){
            if(n1[i]==n2[j]){
                res[indexsize++]=n1[i];
                break;
            }
        }
    }
    for(i=0;i<indexsize-1;i++){
        for(j=0;j<indexsize-1;j++){
            if(res[j]>res[j+1]){
                temp=res[j];
                res[j]=res[j+1];
                res[j+1]=temp;
            }
        }
    }
    printf("The commons are : \n");
    for(i=0;i<indexsize;i++){
        printf("%d",res[i]);
    }

    return 0;
}