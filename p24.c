/*
    simple if

    Syntax 

    if(condtion) 
    {
        body of if
    }
*/

//check a num even or odd
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d",&num);

    printf("before if block\n");

    if(num%2==0)
    {
        printf("Given num is a even number\n");
    }
    else
    {
        printf("Given num is a odd number\n");
    }

    

    printf("after if block\n");
    
}