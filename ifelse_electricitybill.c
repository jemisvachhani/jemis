// Write a C program to calculate final electricity bill based upon below given criteria.
// take monthly electricity unit from user as input. 

// units           price  per unit 
// <100            1
// >100 & <200     2 
// >200 & <300     3
// >300 & <400     4
// >400            5

// also calculate 5% percentage energy charge on total bill amount & display total amount 

#include<stdio.h>
void main()
{
    float unit,bill;
    printf("Enter Unit : ");
    scanf("%f",&unit);

    if (unit < 100 )
    {
        bill=unit*1;
        printf("Your final electricity bill : %.2f",bill);
    }

    if (unit > 100 && unit < 200)
    {
        bill=unit*2;
        printf("Your final electricity bill : %.2f",bill);
    }

    if (unit > 200 && unit < 300)
    {
        bill=unit*3;
        printf("Your final electricity bill : %.2f",bill);
    }

    if (unit > 300 && unit < 400)
    {
        bill=unit*4;
        printf("Your final electricity bill : %.2f",bill);
    }

    if (unit > 400)
    {
        bill=unit*5;
        printf("Your final electricity bill : %.2f",bill);
    }

    bill=bill+(bill*0.05);
    printf("\nTotal bill (inc. 5%% energy charge) : %.2f",bill);
    printf("\nGood Bye");
    
    
}