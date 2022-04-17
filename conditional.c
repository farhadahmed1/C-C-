#include<stdio.h>

int main () {
    int makrs ;
    printf(" Enter your makrs = ");
    scanf("%d" , &makrs);

    if( makrs<=100 &makrs>=80 ){
        printf("You will get A+\n ");
    }
    else if ( makrs<80 & makrs>=70){
        printf(" you will get A\n");
    }
    else if (makrs<70 & makrs>= 60){
        printf(" You will get A-\n");
    }
    else if (makrs<60 & makrs>=50){
        printf(" You will get B\n");
    }
     else if (makrs>=40){
        printf("you will pass in exam\n");
    }
    else{
        printf("you have faild in this exam");
    }
    return 0;
  
}