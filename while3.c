//Write a progame to print following pattern 
//2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300

#include<stdio.h>
void main()
{
    int number=2,ans=3;
    printf("%d ",ans);
    while(ans < 300)
   {
    number= ans - number;
    ans = number + ans;
    printf("%d ",ans);
   }
    
    //number= ans - number;
    //ans= number + ans;
    //("%d ",ans);
    
    
    //number= ans - number;
    //ans= number + ans;
    //printf("%d ",ans);
    
    
    //number= ans -number;
    //ans= number+ans;
    //printf("%d ",ans);
    


}