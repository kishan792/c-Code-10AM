#include<stdio.h>
void main()
{
    char gen;
    int sp;
    int dis;

    printf("Enter the gen\n");
    scanf(" %c",&gen);

    printf("Enter the sp\n");
    scanf("%d",&sp);

    if(gen=='f' || gen=='F')
    {
     //outer if body -> when gen is f or F
     if(sp>=10000)
     {
        // when user is female and sp >= 10000
        dis = 0.15 * sp;
        printf("You avail a dis of %d\n",dis);
     }
     else
     {
         // when user is female and sp < 10000
        dis = 0.10 * sp;
        printf("You avail a dis of %d\n",dis);
     }


    }
    else
    {
        //outer else body -> if the outer if contion fail
        if(sp>=10000)
        {
            // when user is not a female and sp >= 10000
            dis = 0.08 * sp;
            printf("You avail a dis of %d\n",dis);
        }
        else
        {
            // when user is not a female and sp <>=> 10000
            dis = 0.05 * sp;
            printf("You avail a dis of %d\n",dis);
        }
    }

}