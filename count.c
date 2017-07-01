#include <stdio.h>
 
int main()
{
    char ch;
 
    /* Read character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);
 
 
    
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is ALPHABET.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("%c is DIGIT.", ch);
    }
    else
    {
        printf("%c is SPECIAL CHARACTER.", ch);
    }
 
    return 0;
} 
Note: You can als
