#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char st[101], result[101];
    int n1, n2, i, j;
    printf("Enter a sting : \n");
    scanf("%s", st);
    printf("Input position-1 for reverse the string : \n");
    scanf("%d", &n1);
    printf("Input position-2 for reverse the string : \n");
    scanf("%d", &n2); 
    int l = strlen(st);
    i = 0;
    if(n1 > l || n2 > l || n1 < 0 || n1 < 0 || n1 == 0 || n2 == 0){
        printf("Incorect number !");

    }else{
    for(;i<n1-1;i++){
        result[i]=st[i];
    }
    for(j=n2-1; i<n2; i++, j--){
        result[i]=st[j];
    }
    for(;i<=l;i++){
        result[i]=st[i];
    }
    printf("Reverse string %s\n", result);
    }
    return 0;
}