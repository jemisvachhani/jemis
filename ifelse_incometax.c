// Write a C program to calculate income tax, gross income, net income from monthly income given by user 
// yearly income     tax rate
// <3,00,000         5%  

// >=3,00,000
// <5,00,000         10%  

// >=5,00,000
// <8,00,000         20%

// >=8,00,000        30% 

#include<stdio.h>
void main()
{
    int income_tax,gross_income,net_income,monthly_income;
    printf("Enter your monthly income : ");
    scanf("%d",&monthly_income);

    gross_income=monthly_income*12;
    printf("Gross income (p.a.) : %d",gross_income);

    if (gross_income < 300000)
    {
        income_tax=gross_income*5/100;
        printf("\nIncome tax 5%% : %d",income_tax);
    }
    
    if (gross_income >= 300000 && gross_income < 500000)
    {
        income_tax=gross_income*10/100;
        printf("\nIncome tax 10%% : %d",income_tax);
    }
    
    if (gross_income >= 500000 && gross_income < 800000)
    {
        income_tax=gross_income*20/100;
        printf("\nIncome tax 20%% : %d",income_tax);
    }

    if (gross_income >= 800000)
    {
        income_tax=gross_income*30/100;
        printf("\nIncome tax 30%% : %d",income_tax);
    }

    net_income=gross_income-income_tax;
    printf("\nNet income (p.a.): %d",net_income);
    printf("\nGood Bye");
}