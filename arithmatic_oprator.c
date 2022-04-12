#include<stdio.h>
int main() {
    int num1, num2 ;
    printf("Enter the input valu =" );
   
    scanf ("%d %d" , &num1 , &num2);

    int sum = num1 + num2 ;
    printf("%d + %d = %d\n" , num1 , num2 , sum);

    int substaction = num1 - num2 ;
    printf("%d - %d = %d\n" , num1 , num2 , substaction);
    
    int multipication = num1 * num2;
    printf("%d * % d  = %d\n" , num1 , num2 , multipication);

    int div = num1 / num2;
    printf("%d / % d  = %d\n" , num1 , num2 , div);

    double divs = (double) num1 / (double) num2;
    printf("%d / % d  = %lf\n" , num1 , num2 , divs);

    int vagshesh = num1 % num2;
    printf ("%d %% %d = %d\n" , num1 , num2 , vagshesh);

    return 0 ;
}