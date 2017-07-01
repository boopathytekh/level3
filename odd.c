#include <stdio.h>
 
int main()
{
    int i, n;
     
   
    printf("Print odd numbers till: ");
    scanf("%d", &n1,&n2);
 
    printf("All odd numbers from 1 to %d are: \n", n);
 
    /*
     * Start loop from 1 and increments it by 1
     */
    for(i=n1; i<=n2; i++)
    {
        /* If the number is odd then print it */
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
 
    return 0;
}
