#include<stdio.h>

int main(){

    int num , i , sum = 0 ;

    printf("Enter a positive number : ");
    scanf("%d" ,&num);
    // apply for loop 
    for( i =0 ; i <num ; i++){
     sum = sum +i;
    }
    printf("Total = %d" ,sum);
    return 0;
}

