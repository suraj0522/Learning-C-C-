#include<stdio.h>

int main() {
    // int marks []={45, 78, 90, 56, 89};
    // printf("The marks are:%d\n",marks[4]);
    int marks[3];
    printf("enter phy marks :");
    scanf("%d",&marks[0]);

    printf("enter chem marks :");
    scanf("%d",&marks[1]);

    printf("enter math marks :");
    scanf("%d",&marks[2]);

    printf(" phy =%d chem =%d math =%d\n",marks[0],marks[1],marks[2]);





    
    return 0;
}