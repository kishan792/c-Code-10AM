//Relational operators
#include<stdio.h>
void main()
{
    int a = 10;
    int b = 20;
    int c = 10;
    int d = 9;

    int ans;

    ans = a<b;
    printf("%d < %d = %d\n",a,b,ans);

    ans = a>=c;
    printf("%d >= %d = %d\n",a,c,ans);

     ans = a!=c;
    printf("%d != %d = %d\n",a,c,ans);

    ans = b>=d;
    printf("%d >= %d = %d\n",b,d,ans);

    ans = (a==d);
    printf("%d == %d = %d\n",a,d,ans);


}