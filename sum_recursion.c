// sum of n number by using of recursion;
#include<stdio.h>
int sum (int n);
int main (){
printf("sum : %d",sum(5));
    return 0;
}
int sum (int n){
    if (n == 1)
    {
        return 1;
    }
    int sumNM1= sum (n-1); // sum of 1 to n;
    int sumNm= sumNM1 + n;
    return sumNm;
}