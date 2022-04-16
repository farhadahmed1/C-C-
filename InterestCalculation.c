#include<stdio.h>

int main(){
    int p ;
    int t ;
    float r ;
    printf("Enter principle:") ;
    scanf("%d" ,&p);
    printf("Enter time:") ;
    scanf("%d" ,&t);
    printf("Enter rate:") ;
    scanf("%f" ,&r);
    float si = (p*t*r/100) ;
    printf("Simple Interest = %f\n",si);
    float totalAmount = si + p ;
    printf(" Total Amount of Payable  = %0.1f", totalAmount);
    return 0;

}