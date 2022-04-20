#include<stdio.h>
int main(){
  int year ; 
  printf(" Enter any Yera : ");
  scanf("%d" , & year);
//   bool is_leap_year = (year%4 == 0) && (year%100 !=0 || year %400 == 0);
//(year%4 == 0) && (year%100 !=0 || year %400 == 0)
  if ((year%4 == 0) && (year%100 !=0 || year %400 == 0)){
      printf ("Leap year ");
  }
  else{
      printf(" Not Leap Year");
  }


}