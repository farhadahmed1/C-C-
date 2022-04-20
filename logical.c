#include<stdio.h>

// int main () {
//     int num ;
//     printf("Ente any number :");
//     scanf("%d" , &num);
//     if(num >=0 && num<=10){
//         printf("okay this in 0 to 10 number");
//     }
//     else{
//         printf("Not valide number");
//     }
// }

int main () {
    char ch ;
    printf ("Enter any leter: ");
    scanf("%c" ,& ch);
    if(ch == 'a' || ch=='e' ||ch =='i' || ch=='o' || ch =='u'){
        printf(" this is the voule ");
    }
    else{
         printf(" this is the consonent leter");
    
    } 
    return 0;

}


