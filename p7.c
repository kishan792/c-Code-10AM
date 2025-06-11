//Arthmatic operator --> +,-,*,/,%

#include<stdio.h>
void main()
{
    int a = 27;
    int b = 4;

    int ans;

    ans = a+b;

    printf("%d + %d = %d\n",a,b,ans);

    ans = a-b;

    printf("%d - %d = %d\n",a,b,ans);

    ans = a*b;

    printf("%d * %d = %d\n",a,b,ans);

    ans = a/b;

    printf("%d / %d = %d\n",a,b,ans);

    ans = a%b;

    printf("%d %%  %d = %d\n",a,b,ans);

}