#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int n1,n2;
char st[100];
printf("Enter a sting :\n");
scanf("%99s", st);
printf("Enter the number of characters you want to reverse : \n");
scanf("%d %d",&n1,&n2);
int length = strlen(st);
if(n1 > length || n2 > length || n1 < 0 || n2 < 0){
    printf("Incorect numbers !");
}else{
char temp = st[n1-1];
st[n1-1]=st[n2-1];
st[n2-1]=temp;
printf("Output is : %s", st);
}
    return 0;
}