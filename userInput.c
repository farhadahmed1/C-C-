#include<stdio.h>

int main () {

    int englishMark;
    int mathMark;
     
    // printf("Enter Marks in English = ");
    // scanf("%d" , & englishMark);

    // printf("Enter Marks in Math = ");
    // scanf("%d" , & mathMark);

    printf("enter marks in Eng and Math = ");
    scanf( "%d  %d", & englishMark,& mathMark );


    
    int totalMarks = englishMark + mathMark ;
    printf(" totalMarks =  %d", totalMarks);


    return 0;
}