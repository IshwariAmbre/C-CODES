#include<stdio.h>   //123 5


int SumEven( int iNo)
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
       if((iDigit%2)==0);
       {
          iSum= iSum+ iDigit;
       }
      
       iNo= iNo/10;
   }
  return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter num\n");
    scanf("%d, &iValue");       // &address ie value

    iRet= SumEven(iValue);
    printf("even are :%d\n, iRet");

    return 0;
}