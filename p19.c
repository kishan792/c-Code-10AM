#include<stdio.h>
void main()
{
    int n;

    printf("Enter the num\n");
    scanf("%d",&n);

    n>=0 ? printf("Number is positive\n") : printf("Number is negative\n");
}