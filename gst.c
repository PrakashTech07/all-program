// add GST in in it's value
#include<stdio.h>
void price(float value);// proper function declared
int main(){
float value;
printf("enter number:");
scanf("%f",&value);
price(value);
    return 0;
}
void price(float value){// function defination with parameter type
    value =value+ (0.18 * value);
    printf("%f", value);
}