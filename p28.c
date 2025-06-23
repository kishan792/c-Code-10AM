/*
    Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
    Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage < 40% : Grade F



*/

#include<stdio.h>
void main()
{
    int math,phy,che,bio,com;
    
    printf("Enter the marks of math\n");
    scanf("%d",&math);

    printf("Enter the marks of phy\n");
    scanf("%d",&phy);

    printf("Enter the marks of che\n");
    scanf("%d",&che);

    printf("Enter the marks of bio\n");
    scanf("%d",&bio);

    printf("Enter the marks of com\n");
    scanf("%d",&com);

    int per = (math+phy+bio+che+com)/5;

    if(per>=90)
    {
        printf("A grade\n");
    }
    else if(per<90 && per>=80)
    {
        printf("B grade\n");
    }
    else if(per<80 && per>=70)
    {
        printf("c grade\n");
    }
    else if(per<70 && per>=60)
    {
        printf("D grade\n");
    }
    else if(per<60 && per>=40)
    {
        printf("E grade\n");
    }
    else
    {
        printf("F grade\n");
    }

}