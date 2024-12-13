// to convert the temperature;
#include<stdio.h>
float temp( float cel);
int main(){
float far = temp(37);
printf("%f", far);
    return 0;
}
float temp(float cel) {
    float far= (cel *9.0/5.0) + 32;
    return far;
}