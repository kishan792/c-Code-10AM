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
        
        case 2:
            printf("Tuesday\n");
        

        case 3:
            printf("Wednesday\n");
        

        case 4:
            printf("Thursday\n");
        

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
