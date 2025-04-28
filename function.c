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
int fact(int d);
float convertTemp(float celsius);

int calcpersentage(int science, int maths,int sanskrit);
int fib(int g);



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

     //   printHW(10);
       
     //   printf("factorial is :%d\n", fact(5));

       float far = convertTemp(32);
       printf("far is :%f\n", far);

       int sci=80;
       int math=64;
       int sanskrit=45;
       printf("percentage is :%d\n", calcpersentage(sci, math, sanskrit));

       printf("fib is :%d\n",fib(6));

     
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

int fact(int d) {
     if (d==0){
          return 1;

     }
     int factNm1 = fact(d - 1);
     int factD = d * factNm1;
     return factD;
}
float convertTemp(float celsius){
     float far = celsius * (9.0 / 5.0) + 32;
     return far;
}

int calcpersentage(int science, int maths,int sanskrit){
     return((science + maths + sanskrit) / 3);
}
int fib(int g){
     
          if(g==0){
          return 0;
     }
     if(g==1){
          return 1;
     
}

     int fibNm1 = fib(g - 1);
     int fibNm2 = fib(g - 2);
     int fibN = fibNm1 + fibNm2;
     // printf( "fib of %d is :%d\n", g, fibN);
     return fibN;
}