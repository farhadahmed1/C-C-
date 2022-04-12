#include<stdio.h>
 int main(){
  int height ;

  printf("Enter your height is inches:");
  scanf("%d",& height);

  int feet = height / 12 ;
  int inch = height % 12 ;

  printf ("Your height is %d feet %d inches  " , feet ,inch);

  
  return 0;
 }