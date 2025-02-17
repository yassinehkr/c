#include <stdio.h>
#include <stdlib.h>

int main(){
 
    int Index = 1;
    int Index2 = 4; 
    while(Index <= 3){
        printf("%d\n", Index);
        Index++;
    }

    do {
        printf("%d\n",Index2);
        Index2++;
    }while(Index2<=6);

    return 0;
}