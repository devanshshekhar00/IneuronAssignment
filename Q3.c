#include <stdio.h>

int main() {
    int n;
    printf("Enter day number\t");
    scanf("%d",&n);
    switch(n)
    {
        case 1 ... 3:
         if(n == 1) printf("Happy sunday");
         if(n == 2) printf("Happy monday");
         if(n == 3) printf("Happy tuesday");
        case 4 ... 7:
         if(n == 4) printf("Happy wednesday");
         if(n == 5) printf("Happy thursday");
         if(n == 6) printf("Happy friday");
         if(n == 7) printf("Happy sat");
        
    }
    
    return 0;
}
