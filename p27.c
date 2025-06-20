//WAP to print week day on a given input..
/*
    input - 1
    output  - monday

    input 2 
    output tuesday

    input - 5
    output - friday
*/

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the num\n");
    scanf("%d",&n);

    if(n==1)
    {
        printf("Monday\n");
    }
    else if(n==1)
    {
        printf("Tuesday\n");
    }
    else if(n==1)
    {
        printf("Wednesday\n");
    }
    else if(n==1)
    {
        printf("Thursday\n");
    }
    else if(n==5)
    {
        printf("friday\n");
    }
    else if(n==6)
    {
        printf("saturday\n");
    }
    else if(n==7)
    {
        printf("sunday\n");
    }
    else{
        printf("Invalid input\n");
    }
}