// #include<stdio.h>
// int main () {
//     int n =10 ;

//     for (int i = 0 ; i<10 ; i++){
//         if(i%2 == 0 ){
//            printf("%d is even\n" , i) ;
//         }
//         else{
//             printf("%d is odd\n" , i);
//         }
       
//     }
// }

// application in real life  any number  gunonik  bahir korar formula

#include<stdio.h>
int main() {
    int n ;
    printf(" Enter the number = ");
    scanf("%d" , & n ) ;
    int counter = 0 , sum = 0 ;

    for(int i = 1 ; i<=n ; i++){
        if(n%i == 0 ){
            printf(" %d " ,i);
            counter++;
            sum += i ;
        }
    }
    printf(" Number of  divisors  = %d\n" ,counter);
    printf(" Total sum = %d\n" , sum);

}

