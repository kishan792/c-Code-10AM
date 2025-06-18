#include<stdio.h>
void main()
{
    int a;
    int b;
    int c;

    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    c = a<b ? a : b;

    printf("Value of c : %d\n",c);
}