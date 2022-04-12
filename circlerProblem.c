#include<stdio.h>

int main() {
    int radius;
   const double pi = 3.1416 ;
    printf(" Enter the circle radius = ");
    scanf("%d", &radius);

    double perimeter = 2* radius * pi;
    printf("Circle perimeter = %0.2lf\n", perimeter);

    double area = radius* radius * pi;
    printf("Circle Area = %0.2lf", area);

   


    return 0;
}