//ACCEPT NUM TAKE THAT AS INPUT, REVERSE INPUT
//721   127
//jodyla star 
#include<stdio.h>   

int Reverse(int iNo)
{
   int iDigit=0;
   int iRev=0;
   while(iNo>0)
  {
    iDigit= iNo%10;
    iRev=iRev*10+ iDigit;
    //logic
    iNo=iNo/10;
  }
  return iRev;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter num\n");
    scanf("%d", &iValue);     

    iRet= Reverse(iValue);

    printf("Reverse num is:%d \n", iRet);

    return 0;
}