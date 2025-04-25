#include <stdio.h>
#include <math.h>


// void printhello();
// void printgdbye();
// void namaste();
// void bonjour();
int sum(int a, int b);
void printtable(int n);
void calprice(float value);
float sqareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);
void printHW(int count);



int main(){
     // int a, b;
     //   printf("print first number :\n");
     //   scanf("%d", &a);
     
     //   printf("print second number :\n");
     //   scanf("%d", &b);

     // int s = sum(a, b);
     // printf("Sum of %d \n",s);

     // int n;
     //   printf("enter a number:\n");
     //   scanf("%d", &n);

     //   printtable(n); //argument or accutal parameter

     //   float value =100;
     //   calprice(value);
     //   printf("value is %f\n", value);
       float a = 5.0;
       float b= 10.0;
       printf("area is %f\n", rectangleArea(a , b));

       printHW(10);       

     
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
void printtable(int n){ // formal parameter /parameter
     for (int i = 1; i <= 10; i++){
          printf("%d \n",i*n);
     }
}
void calprice(float value){
     value = value + (value * 0.18);
     printf("price of final value :%f\n", value);
}
float sqareArea(float side){
     return side * side;
}

float circleArea(float rad){
      return 3.14 * rad * rad;
}
float rectangleArea(float a, float b){
     return a * b;
}
void printHW(int count){
     if (count ==0){
          return;
     }
     
          printf("hello world\n");
          printHW(count - 1);
     }
