#include <stdio.h>
#include <stdlib.h>

int main(){
    int seq[101],n,i,max=0,ctr=1,start=1,temp_start=0;
    printf("Enter number of integers you want to put : \n");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid Input!");
        return 1;
    }
    printf("Enter numbers in the sequence : \n");
    for(i=0;i<n;i++){
        scanf("%d",&seq[i]);
        if(seq[i]<0){
            printf("Input only positive numbers !");
            return 1;
        }
    }
    for(i=1;i<n;i++){
        if(seq[i]>seq[i-1]){
            ctr++;
        }
        else
        {
            if(ctr>max){
                max=ctr;
                start = temp_start;
            }
            ctr =1;
            temp_start =i;
        }
    }
    if(ctr>max){
        max=ctr;
        start = temp_start;
    }
    printf("The longest subseq is : %d\n",max);
    printf("The subseq is :");
    for(i=start;i<start+max;i++){
        printf("%d ",seq[i]);
    }
    return 0;
}