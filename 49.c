#include<stdio.h>    //return no. of digits
// 123 so ot will show 3

int CountDigits( int iNo)
{
   int iDigit=0;
   int iCnt=0;
   if(iNo<0)
   {
       iNo= -iNo;
   }

   while(iNo!=0)
   {
       iCnt++;
    
       iNo= iNo/10;
   }
   return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter num\n");
    scanf("%d, &iValue");       // &address ie value

    iRet= CountDigits(iValue);
    printf("num are :%d\n, iRet");

    return 0;
}