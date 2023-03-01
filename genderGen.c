#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned long long num;
    
    printf("Enter the ID Number : ");
    scanf("%llu", &num);
    printf("Your ID Number: %llu ", num);
    
    
    int nDigits = floor(log10(abs(num))) + 1;
    
    printf("\nDigits: %d", nDigits);
    
    if(nDigits==9){
        
        int third = (num / 1000000) % 10;
    
        printf("\nthird : %d \n", third);
    
        if(third>=5){
            printf("\naccept. You are a Female");
        }else{
            printf("\nunfortunately! You are not a Female");
        }
    
    }else if(nDigits>9){
        
        int fifth = (num / 10000000) % 10;
    
        printf("\nfifth : %d \n", fifth);
    
        if(fifth>=5){
            printf("\naccept. You are a Female");
        }else{
            printf("\nunfortunately! You are not a Female");
        }
    }
    

    return 0;
}
