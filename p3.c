//To take input from the user using scanf() function...
//Run time input
#include<stdio.h>
void main()
{

    int age;
    char gen;
    float per;


    printf("Enter your age...\n");
   scanf("%d",&age);

   printf("Enter M for male and F for female\n");
   scanf(" %c",&gen);

   printf("Enter your 12th per\n");
   scanf("%f",&per);

    printf("My age is : %d\n",age);
    printf("My gen is : %c\n",gen);
    printf("My per in 12 is : %f\n",per);
}