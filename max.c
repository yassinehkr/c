#include <stdio.h>

int max(int num1, int num2, int num3){
    if (num1 >= num2 && num1 >= num3){
        return num1;
    }else if(num2 >= num1 && num2 >= num3){
        return num2;
    }else return num3;

}

int main(){
    int a,b,c;
    printf("Enter 3 num : \n");
    scanf("%d %d %d",&a, &b, &c);
    // printf("Enter the second num : \n");
    // scanf("%d",&b);
    printf("the max num is %d",max(a,b,c));
    return 0;
}