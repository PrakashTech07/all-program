// to find the area of function'
#include<stdio.h>
#include<math.h>
float squarearea(float side);
float circlearea(float rad);
float rectanglearea( float height,float width);
int main(){
float side, rad, height, width;
printf("enter number for square area :");
scanf("%f",&side);
printf("the square is %2f\n",squarearea(side));// for square numbers

printf("enter number for area of circle :");
scanf("%f",&rad);
printf("area of circle is %2f\n",circlearea(rad));//for area of circle

printf("enter height :");
scanf("%f",&height);
printf("enter width :");
scanf("%f",&width);
printf("the area of rectangle is %2f\n", rectanglearea(height,width));

    return 0;
}
float squarearea(float side){
    return side * side ;
}
float circlearea(float rad){
    return 3.14 * rad * rad;
}
float rectanglearea( float height, float width){
    return height * width;
}
