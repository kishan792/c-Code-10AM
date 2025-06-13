#include<stdio.h>
void main()
{
    int len;
    int bre;
    int area;

    printf("Enter the value of len\n");
    scanf("%d",&len);

    printf("Enter the value of bre\n");
    scanf("%d",&bre);

    area = len * bre;

    printf("area of rectangle : %d\n",area);
}