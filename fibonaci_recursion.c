#include<stdio.h>
int fib( int n);
int main (){
printf("%d",fib(9));
    return 0;
}
int fib(int n){
    if (n==1)
    {
        return 1;/* code */
    }
    if (n==0)
    {
        return 0;/* code */
    }
    
    
int fib1= fib(n-1);
int fib2= fib(n-2);
int fibt= fib1+fib2;
//printf("fib1 %d : is %d:\n",n , fibt);
}