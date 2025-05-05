#include<stdio.h>

int main() {
    // int marks []={45, 78, 90, 56, 89};
    // printf("The marks are:%d\n",marks[4]);
    // int marks[3];
    // printf("enter phy marks :");
    // scanf("%d",&marks[0]);

    // printf("enter chem marks :");
    // scanf("%d",&marks[1]);

    // printf("enter math marks :");
    // scanf("%d",&marks[2]);

    // printf(" phy =%d chem =%d math =%d\n",marks[0],marks[1],marks[2]);

    float price[3];
    printf("Eneter 3 prices :");

    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("total price 1 :%f\n",price[0]+(0.18*price[0]));
    printf("total price 2:%f\n",price[1]+(0.18*price[1]));
    printf("total price 3 :%f\n",price[2]+(0.18*price[2]));

    





    
    return 0;
}