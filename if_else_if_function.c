#include<stdio.h>// for function for if or else 
void namste();
void bonjour();
void hello();
void before();
int main() {
printf("i for India and F for French:");
char ch;
scanf("%c",&ch);
if (ch == 'i' || ch == 'I')
{
namste();
}
else if (ch =='f' || ch=='F')
{
    bonjour();
}
else if( ch=='h' || ch=='H')
{
    hello();
}
else{
before();
}

    return 0;
}
void namste() {
    printf("India\n");
}
void bonjour (){
    printf("French\n");
}
void hello (){
printf("hello.c");
}
void before(){
    printf("goodbye");
}