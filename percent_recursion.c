// To find the percent of numbers
#include<stdio.h>
int percent( int math, int sc, int eng, int hindi);
int main(){
    int math=75;
    int sc=86;
    int eng=95;
    int hindi=45;
printf("total percentage is %d", percent(  math, sc, eng, hindi));
    return 0;
}
int percent( int math, int sc, int eng, int hindi){
    int total_per= ((math + sc + eng + hindi)/4);
    return total_per;
}