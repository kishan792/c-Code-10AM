#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the char\n");
    scanf(" %c",&ch);

    (ch>=65 && ch<='Z') || (ch>='a' && ch<='z') ? printf("Given char is a alphabet\n") : printf("Given char is not a alphabet\n");
}