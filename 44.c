#include<stdio.h>       //best programming practice    
#include<stdbool.h>         //42 43 39 44 is best

int CheckPrime(int iNo)       // num of factors are displayed
{
  
    int iCnt=0;
    //  1       2            3
    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
       if(iNo%iCnt==0)    //4 loop body
       {
           
           break;
       }
    }
   if(iCnt==(iNo/2)+1)
   {
       return true;
   }
   else
   {
       return false;
   }
}
int main()
{
    int iValue=0;
    bool bRet;

    printf("enter num\n");
    scanf("%d",&iValue);

    bRet= CheckPrime(iValue);
    if(bRet== true)
    {
        printf("%d is prime\n", iValue);
    }
    else
    {
        printf("%d is not prime\n", iValue);
    }
    
    return 0;
}