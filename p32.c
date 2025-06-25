/*
    press 1 for English
    press 2 for hindi
    press 3 to check your balance
    press 9 to talk to execute...
*/

#include<stdio.h>
void main()
{
    int num;

    printf("Enter a num b/w 1 to 7\n");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
            printf("Monday\n");
        break;

        case 2:
            printf("Tuesday\n");
        break;

        case 3:
            printf("Wednesday\n");
        break;

        case 4:
            printf("Thursday\n");
        break;

        case 5:
            printf("Friday\n");
        break;

        case 6:
            printf("Saturday\n");
        break;

        case 7:
            printf("Sunday\n");
        break;

        default:
            printf("Invalid input...\n");
        break;
    }

}
