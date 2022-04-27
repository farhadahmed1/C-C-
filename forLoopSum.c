#include<stdio.h>

int main () {
    
    int i, num , sum = 0  ;
    printf(" Enter the positive number :");
    scanf("%d" , &num) ;

    for(i = 0 ; i<=num ; i++ ){
       sum = sum +i*i ;   
    }
    printf("Total = %d", sum);
    return 0 ;
}

/*for( starting code ; continue condition ; repeatation ){
    statements;
}
*/

