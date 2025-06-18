#include<stdio.h>
void main()
{
    int person1;
    int person2;
   

    printf("Enter the age of person1\n");
    scanf("%d",&person1);

    printf("Enter the age of person2\n");
    scanf("%d",&person2);

    person1>person2 ? printf("person 1 is older\n") : printf("person 2 is older\n") ;
}