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

    int i;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    printf("I am in main function before loop\n");

    for(i=1;i<=10;i++)
    {
        //body of the loop
        printf("Kishan\n");
    }

    printf("I am in main function after loop\n");

}