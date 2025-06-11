//Uniary operator ----> post Increment/decrement And pre Increment/decrement..

//Post --> operand operator
//pre --> operator operand

#include<stdio.h>
void main()
{
    int a = 10;
   // int b = a++; post increment

   //int b = a--;

   int b = -a;

    printf("Value of a : %d\n",a);
    printf("Value of b : %d\n",b);
}