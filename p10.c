//Logical operators
#include<stdio.h>
void main()
{
    int a = 10;
    int b = 20;
    int c = 10;
    int d = 9;

    int ans;

    ans = ((a>b) && (b>c));
    printf("Ans : %d\n",ans);

    ans = ((a>b) || (b>c));
    printf("Ans : %d\n",ans);

    ans = !((a>b) || (b>c));
    printf("Ans : %d\n",ans);

    ans = (!(a>b) && (b>c));
    printf("Ans : %d\n",ans);

}