// square number with the help of power;
#include<stdio.h>
#include<math.h>
int main(){
float n,square;

printf("enter number :");
scanf("%f",&n);
square = pow(2,n);
printf("The square of number is%f : is%f",n, square);
return 0;
}