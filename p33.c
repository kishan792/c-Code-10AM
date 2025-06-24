#include<stdio.h>
void main()
{
    char ch;
    printf("Press S to calculate area of square\n");
    printf("Press R to calculate area of Rectrangle\n");
    printf("Press T to calculate area of Tringle\n");
    printf("Press C to calculate area of circle\n");

    scanf(" %c",&ch);

    int area,side,len,bre;

    switch(ch)
    {
        case 'S':
            printf("Enter the value of Side\n");
            scanf("%d",&side);

            area = side *side;

            printf("area of square is : %d\n",area);

        break;

        case 'R':
            printf("Enter the value of len\n");
            scanf("%d",&len);
            printf("Enter the value of Bre\n");
            scanf("%d",&bre);

            area = len *bre;

            printf("area of rectangle is : %d\n",area);
        break;

        case 'T':

        break;

        case 'C':

        break;

        default:

        break;
    }
}