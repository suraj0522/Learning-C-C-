#include <stdio.h>

// void printhello();
// void printgdbye();
void namaste();
void bonjour();
int main(){
       printf("neter f for french & i for india \n");
       char ch;
       scanf("%c", &ch);

       if (ch =='i'){
        namaste();
       }else{
          bonjour();
       }
       
       
     
     
    return 0;
}

// void printhello() {
//      printf( "hello!\n");
//      printf("hey  there \n");
// }
// void printgdbye() {
//      printf( "goodbye!\n");
     
// }

void namaste(){
     printf("namaste \n");

}
void bonjour(){
     printf("bonjour \n");

}