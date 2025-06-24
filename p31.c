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

    printf("press 1 for English\npress 2 for hindi\npress 3 to check your balance\npress 9 to talk to execute...\n");
    scanf("%d",&num);

    switch(num)
    {
        case 9:
            printf("Connecting your call to executive...\n");
        break;

        case 2:
            printf("Your language changed to hindi\n");
        break;

        case 1:
            printf("Your language changed to English\n");
        break;

        case 3:
            printf("Your Avialable balance is RS 150\n");
        break;

        default:
            printf("Invalid input...\n");
        break;
    }

}
