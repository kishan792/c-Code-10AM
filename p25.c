#include<stdio.h>
void main()
{
    char ch;

    printf("Enter the char\n");
    scanf(" %c",&ch);

    if(ch=='a'||  ch=='e')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Not a Vowel\n");
    }
}