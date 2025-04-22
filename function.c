#include <stdio.h>

// void printhello();
// void printgdbye();
// void namaste();
// void bonjour();
int sum(int a, int b);
int main(){
     int a, b;
       printf("print first number :\n");
       scanf("%d", &a);
     
       printf("print second number :\n");
       scanf("%d", &b);

     int s = sum(a, b);
     printf("Sum of %d \n",s);

     
    return 0;
}

// void printhello() {
//      printf( "hello!\n");
//      printf("hey  there \n");
// }
// void printgdbye() {
//      printf( "goodbye!\n");
     
// }

// void namaste(){
//      printf("namaste \n");

// }
// void bonjour(){
//      printf("bonjour \n");

// }

int sum(int a, int b){
     return a + b;
}