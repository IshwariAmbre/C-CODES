#include<stdio.h>
#include<stdbool.h>
int CheckPrime(int iNo)       // num of factors are displayed
{
    bool bFlag= true;
    int iCnt=0;
    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
       if(iNo%iCnt==0)
       {
           bFlag=false;
           break;
       }
    }
       return bFlag;
   
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