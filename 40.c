#include<stdio.h>
#include<stdbool.h>
int CountFactor(int iNo)       // num of factors are displayed
{
    int iFactCnt= 0;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
       if(iNo%iCnt==0)
       {
           iFactCnt++;
       }
    }
   return iFactCnt;
}
int main()
{
    int iValue=0;
    int iRet;

    printf("enter num\n");
    scanf("%d",&iValue);

    iRet= CountFactor(iValue);
    
         printf(" num of factor are : %d\n", iRet);
    return 0;
}