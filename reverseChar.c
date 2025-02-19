#include<stdio.h>
#include<stdlib.h>

int main(){
int c,rc;
 char a[] = {'X','L','M'};
 printf("The reverse of ");
for(c=0;c<=2;c++){
    
    printf("%c",a[c]);
}
printf(" is ");
for(c=2;c>=0;c--){
    printf("%c",a[c]);
}
// another methode
char c1 = 'X',c2 = 'L', c3 = 'M';
printf("\nThe reverse of %c%c%c is %c%c%c",c1,c2,c3,c3,c2,c1);
    return 0;
}