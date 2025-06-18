#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the char\n");
    scanf(" %c",&ch);

    (ch>='0' && ch<='9')? printf("Given char is a number\n") : printf("Given char is not a number\n");
}