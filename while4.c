//write a programe to print following pattern
//0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000

#include<stdio.h>
void main()
{
    int number=0,ans;
    printf("%d ",number);

    number = number + 1;  
    ans = number;
    printf("%d ",ans);
    while(ans<1000)
    {
       number = number + 1;
       ans = ans + number; 
       printf("%d ",ans);
    }
    

    //number = number + 1;
    //ans = ans + number;
    //printf("%d ",number);
    
    //number = number +1;
    //ans = ans + number;
    //printf("%d ",number);

}

