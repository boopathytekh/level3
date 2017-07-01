#include <stdio.h>
 
void  main()
{
    int a, b, c, i, term;
 
    
    printf("Enter number of terms: ");
    scanf("%d", &term);
 
    
    a = 0;
    b = 1;
    c = 0;
 
    printf("Fibonacci terms: \n");
 
   
    for(i=1; i<=term; i++)
    {
        printf("%d, ", c);
 
        a = b; 
        b = c; 
        c = a + b; 
    }
 
    
} 
