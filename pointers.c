#include<stdio.h>

int main(){
    int age =10;
    // int *ptr = &age;
    
     
    // printf("%p\n",&age);
    // printf("%u\n",&age);
    // printf("%u\n",ptr);
    // printf("%u\n",&ptr);

    // printf("%d\n",*ptr);
    printf("%d\n",age);
    printf("%d\n",*(&age));

    int x;
    int *ptr;

    ptr =&x;
    *ptr = 0;

    printf("x = %d\n", x);
    printf("x = %d\n", *ptr);

    *ptr +=5;
    printf("x = %d\n", x);
    printf("x = %d\n", *ptr);

    (*ptr)++;
    printf("x = %d\n", x);
    printf("x = %d\n", *ptr);





         
    




    return 0;
}