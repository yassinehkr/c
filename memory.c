#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 30;
    int *pAge = &age;
    
    printf("%d  \nmemoryAdressIs : %p\n",age, &age);
    *pAge = 35;
    printf("%d \nmemoryAdressIs : %p\n", *pAge, pAge);

    return 0;
}