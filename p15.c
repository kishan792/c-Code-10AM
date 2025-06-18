//Area of circle....
// PI = 3.1416
#include<stdio.h>
//#define pi 3.1416
void main()
{
    int r;
    float area;
    const float pi = 3.1416;

    printf("Enter the rad\n");
    scanf("%d",&r);

    area = pi * r *r;

    printf("Area of curcle = %f\n",area);

}