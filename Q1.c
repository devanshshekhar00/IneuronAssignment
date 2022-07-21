
#include <stdio.h>

int main() {
    int monthNumber;
    printf("Enter the month Number \t");
    scanf("%d",&monthNumber);
    switch(monthNumber)
    {
        case 1 ... 7:
         if(monthNumber == 2)
         {
             printf("28 days");
         }
         else 
         {
             if(monthNumber%2!= 0)
             {
                 printf("31 days");
             }
             else 
             {
                 printf("30 days");
             }
         }
         case 8 ... 12:
         if(monthNumber%2!= 0)
             {
                 printf("30 days");
             }
             else 
             {
                 printf("31 days");
             }
        
         
    }
    return 0;
}
