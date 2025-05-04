#include<stdio.h>

void square(int n);
void _square(int* n);
// void swap(int a,int b);
void _swap( int* a, int* b);
void prtAddress(int a);
void dowork( int f, int g ,int* sum, int* mul, int* avg);


int main(){
    // int age =10;
    // int *ptr = &age;
    
     
    // printf("%p\n",&age);
    // printf("%u\n",&age);
    // printf("%u\n",ptr);
    // printf("%u\n",&ptr);

    // printf("%d\n",*ptr);
    // printf("%d\n",age);
    // printf("%d\n",*(&age));

    // int x;
    // int *ptr;

    // ptr =&x;
    // *ptr = 0;

    // printf("x = %d\n", x);
    // printf("x = %d\n", *ptr);

    // *ptr +=5;
    // printf("x = %d\n", x);
    // printf("x = %d\n", *ptr);

    // (*ptr)++;
    // printf("x = %d\n", x);
    // printf("x = %d\n", *ptr);

    // float price =100.00;
    // float *ptr2 =&price;
    // float **pptr =&ptr2;

    int i =10;
    int *ptr2 =&i;
    int **pptr = &ptr2;
    printf("%d\n",**pptr);

    int number = 5;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);

    int x =3 ;
    int y= 5;
    _swap(&x,&y);
    printf("a = %d\n", x);
    printf("b = %d\n", y);

     int a =10;
     prtAddress(a);
    printf( "print address =%u\n",&a);

    int f=3;
     int g=5;
     int sum , prod , avg;
     dowork(f,g,&sum,&prod,&avg);
     printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);









         
    




    return 0;
}

void square(int n){
     n = n * n;
     printf("sqare = %d \n", n);
}
void _square(int* n){
        *n = *n * *n;
        printf("sqare = %d \n", *n);
}

// void swap(int a,int b){
//     int t= a;
//     a = b;
//     b = t;
//     printf("a = %d\n", a);
//     printf("b = %d\n", b);
// }
void _swap( int* a, int* b){
     int t = *a;
     *a = *b;
     *b = t;
    //  printf("a = %d\n", *a);
    //  printf("b = %d\n", *b);
}

void prtAddress(int a){
     printf( "print address =%u\n",&a);
}
void dowork( int f, int g,int*sum, int *mul,int *avg){
    * sum = f + g;
     * mul = f * g;
     * avg = (f + g) / 2;


      
}