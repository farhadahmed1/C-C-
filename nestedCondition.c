#include<stdio.h>

int main(){
    int a , b ;
    printf("Enter the valu of a and b : ");
    scanf ("%d %d" , &a, &b);

    if (b!= 0){

        if(a % b == 0){
          printf("%d is  divisable by %d\n" , a ,b);
        }
        else{
           printf("%d is not divisable by %d\n", a , b);
        }
    }
    else{
        printf("You Cannot divide 0 ");
    }
    return 0;
}

// a/b b=!0 and a/b not divisable 