#include<stdio.h>
int main(){
   int num ;
   printf(" Enter A number : ");
   scanf("%d", &num);
   if(num< 0){
      num = -num;
   };
    printf("Absolute value: %d\n", num);
    return 0;
}