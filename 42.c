#include<stdio.h>         //done by self
#include<stdbool.h>
int CountFactor(int iNo)       // num of factors are displayed
{
    int iFactCnt= 0;
    int iCnt=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
       if(iNo%iCnt==0)
       {
           iFactCnt++;
       }
    }
   return iFactCnt;

}
bool CheckPrime(int iNo)
{
    int iRet=0;
    iRet= CountFactor(iNo);

    if(iRet==0)
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

    if(bRet==true)
    {
       printf("%d is prime", iValue);
    }
    else
    {
        printf("%d not prime", iValue);
    }
         
    return 0;
}