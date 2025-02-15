#include <stdio.h>
#define n 5

int main (){
    int i, temp;
    int T[n] = {-100, 20, -35, 81, -25};
    temp = T[n-1]+(sizeof(T)/n);

    for(i=n-1;i>0;i--) T[i]=T[i-1]+i*i;
    T[0]= temp;
    printf("%d \n",temp);
    for(i=0;i<n;i++){
    printf("T[%d]=%d",i,T[i]);
    }
    return 0;

}