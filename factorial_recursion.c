// fact of n number by using of recursion;
#include<stdio.h>
int fact (int n);
int main (){
printf("factorial : %d",fact(4));
    return 0;
}
int fact (int n){
    if (n == 1)
    {
        return 1;
    }
    int fact1m= fact (n-1); // fact of 1 to n;
    int theFact= fact1m *n;
    return theFact;
}