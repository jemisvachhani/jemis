//Write a program to accept height from user as float value(foot.inch). display message "you are short" if height is less then 5 foot
#include<stdio.h>
void main()
{
    float hight;
    printf("enter your hight in feet.inch");
    scanf("%f",&hight);
    
    if (hight < 5)
    {
        printf("you are a short is ");
    }
    printf("\ngood bye...");
}