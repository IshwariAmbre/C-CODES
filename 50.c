// accept num and return summision of digits
#include<stdio.h>   //123 5


int SumDigits( int iNo)
{
   int iDigit=0;
   int iSum=0;
   if(iNo<0)
   {
       iNo= -iNo;
   }

   while(iNo!=0)
   {
       iDigit=iNo%10;
       iSum= iSum+ iDigit;
       iNo= iNo/10;
   }
  return 0;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter num\n");
    scanf("%d, &iValue");       // &address ie value

    iRet= SumDigits(iValue);
    printf("num are :%d\n, iRet");

    return 0;
}