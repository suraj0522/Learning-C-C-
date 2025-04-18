#include <stdio.h>

int main(){

    // switch statement
    
    //  char day; // m =monday, t=tuesday, w=wednesday, th=thusday, f=friday, s=saturday, su=sunday
    // printf(" enter day (m -S):");
    // scanf("%s", &day);

    // switch (day) {
        
    //     case 'm': printf("monday \n");
    //     break;
    //     case 't': printf("tuesday\n");
    //     break;
    //     case 'w': printf("wednesday\n");
    //     break;
    //     case 'T': printf("thusday \n");
    //     break;
    //     case 'f': printf("friday \n");
    //     break;
    //     case 's': printf("saturday \n");
    //     break;
    //     case 'S': printf("sunday \n");
    //     break;
    //      default: printf("invalid day \n");
    //         break;
    // }

    // if else statement
    // int number;
    //  printf("enter a number :");
    //  scanf("%d", &number);
    //  if ( number >=0){
    //     printf("positive \n");
    //     if( number %2 ==0){
    //          printf("even \n");
             
    //     }else{
    //         printf("odd \n");
    //     }

    //  } else{
    //     printf("negative \n");
    //  }

    int marks;
    printf("enter marks (0-100) :");
    scanf("%d",&marks);

    if(marks >=0 && marks <=30 ){
        printf("fail \n");


    }else if (marks >30 && marks <=100) {
         printf( "pass \n");
    }else{
         printf("invalid marks \n");
    }
int x = 2;
if(x = 4){
     printf("x is 1 \n" );
     printf("%d\n", x);
     

}else{
     printf( "x is not 1 \n");

}
// char ch;
// printf("enter a character :");
// scanf(" %c", &ch);
// if (ch >= 'A' && ch <= 'Z'){
//      printf("uppercase \n");
// }else if (ch >= 'a' && ch <= 'z'){
//      printf("lowercase \n");
     
// }else{
//      printf("invalid character \n");
// }
   for(int i = 0;  i <= 1; i++){
      printf( "%d \n", i);
   }

//    for(int d = 10;  d >= 1; d= d-1){
//      printf( "%d \n", d);
//   }
// for( char ch ='a'; ch <='z'; ch++){
//       printf( "%c \n", ch);
// }

int g;
printf("enter a number :");
scanf("%d", &g);

int sum =0;
// while(s <=g){
//       printf( "%d \n",s);
//       s++;
// }
for (int j =1, h=g; j<= g && h>=1; j++,h-- ){
      sum = sum +j;
      printf("%d \n", h);
}
printf("sum = %d \n", sum);

// for( int j =g; j>=1; j--){
//           printf("%d \n", j);
// }
//  printf( "%d \n", s);

     //  int c =0;

     //  do{
     //      printf("%d \n", c);
     //      c++;
     //  }while (c <= 5); 
     
      

    return 0;
}