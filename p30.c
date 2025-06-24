/*
    Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:

    For first 50 units Rs. 0.50/unit
    For next 100 units Rs. 0.75/unit
    For next 100 units Rs. 1.20/unit
    For unit above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill
    C program to calculate electricity bill


*/

#include<stdio.h>
void  main()
{
    int unit;
    printf("Enter the unit\n");
    scanf("%d",&unit);

    float charge;
    float subCharge;

    if(unit<=50)
    {
        charge = 0.50 * unit;
    }
    else if(unit>50 && unit<=150)
    {
        charge = 25.0;
        unit = unit - 50;
        charge = charge + (unit*0.75);

    }
    else if(unit>150 && unit<=250)
    {
        charge = 100.0;
        unit = unit-150;

        charge = charge + (unit*1.20);
    }
    else{
        charge = 220.0;
        unit = unit-250;

        charge = charge + (unit*1.50);
    }
    
    if(charge>=100.0)
    {
        subCharge = 0.20 * charge;
        charge = charge + subCharge;
    }

    printf("Total amount to be paid : %f\n",charge);
}