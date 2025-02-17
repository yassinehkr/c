#include <stdio.h>




int main(){
 double num1, num2;
 char x;
 printf("Enter A Mathematical Operation : \n");
 scanf("%lf %c %lf",&num1,&x, &num2);
//  scanf("%s", x);
//  scanf("%lf",&num2);
if(x=='+'){
    printf("%lf", num1+num2);
}else if(x == '-'){
    printf("%lf",num1-num2);
}else if(x == '*'){
    printf("%lf", num1*num2);
}else if(x == '/'){
    printf("%lf", num1/num2);
}else {
    printf("Invalid Operator");
}


 return 0;

}