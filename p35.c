/*
    For Loop - type of entry control loop

    for(intlial;condition;updation)
    {
        body of thr loop
    }


*/

#include<stdio.h>
void main()
{

    short int i;

    printf("I am in main function before loop\n");

    for(i=1; ;i++)
    {
        
        printf("%d\n",i);
    }

    printf("I am in main function after loop\n");

}