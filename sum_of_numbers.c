// sum of numbers with the help of function.
#include<stdio.h>
int sum (int a , int b, int c);
int main(){
    int a, b,c;
printf("enter a :");
scanf("%d", &a);
printf("enter b :");
scanf("%d",&b);
printf("enter c:");
scanf("%d",&c);

int s= sum(a,b,c);
printf("sum is %d:",s);
    return 0;
}
int sum (int x, int y,int z){
    return x + y + z; 
}