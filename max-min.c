#include<stdio.h>

 int main () {
    // int     a=20 , b=10 ;

    // ternary operator

    //   int maxValue = a>b ? a : b ;
    //   int minValue =a<b ? a:b ;

    // if(a > b) {
    //     maxValue = a;
    // }
    // else {
    //    maxValue  = b;
    // }
    //   printf("maximum value = %d \n" ,maxValue);
    //   printf("minimum value = %d \n" ,minValue);


    int A , B , C;
    scanf("%d %d %d", &A, &B, &C);

    int waterLeft = A - B;
    // int waterPoured =waterLeft<=C? waterLeft : C;
    // C-= waterPoured;
     
    //  printf( "%d" ,waterPoured);
    if (waterLeft >= C){
        printf("0");

    }
    else{
        C -= waterLeft; 
        printf("%d",C);
    }

    return 0;
}


