#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num, i, sum = 0;   
    printf(" Enter a positive number: ");  
    scanf("%d", &num); 
    for (i = 0; i <= num; i++)  
    {  
        sum = sum + i;  
    }   
    printf("\n Sum of the first %d number is: %d", num, sum);   
    getch();  
}  
