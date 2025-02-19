#include <stdio.h>
#include <stdlib.h>

int main(){
    double r,a,c;
    
    printf("Enter a raduis : ");
    scanf("%lf",&r);
    c= 2*3.14159265359*r;
    a= 3.14159265359*r*r;
    printf("Perimeter of the Circle = %lf inches\n", c);
    printf("Area of the Circle  = %lf square inches", a);


    return 0; 
}