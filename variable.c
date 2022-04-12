#include<stdio.h>

int main() {
    int bookPrice;
    int dalyCost;
    float totalAmount;
    float temparature ;

    bookPrice= 40;
    dalyCost= 90;
    temparature = 32.5;
    totalAmount =bookPrice + dalyCost + temparature ;
    
    printf("Book Price = %d And the Book Price = %d\n " ,bookPrice , dalyCost);
    printf("Total cost of  %f\n" ,totalAmount);
  
    // tow decimal Places in C
    printf("Total cost of  %0.2f" ,totalAmount);



    return 0;

}