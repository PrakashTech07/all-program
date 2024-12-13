// Multiple of a numbers with the help of function.
#include<stdio.h>
void printtable(int n);
int main(){
int n;
printf("enter number:");
scanf("%d",&n);
printtable(n);
    return 0;
}
void printtable(int n){
    for(int i=1; i<=10;i++ ){
         printf("%d\n",n * i);
    }
    
}

// this below code from chatgpt.

// #include<stdio.h>

// // Function declaration
// void printTable(int n);

// int main() {
//     int n;

//     // Ask user to enter a number
//     printf("Enter a number: ");
//     scanf("%d", &n);  // Correctly reads the number from user

//     // Call the printTable function to print the multiplication table
//     printTable(n);

//     return 0;
// }

// // Function definition to print the multiplication table
// void printTable(int n) {
//     for(int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);  // Use printf to display output
//     }
// }
