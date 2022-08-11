//accept num from user and check armstrong num or not
//153= 1raise to 3+ 5 raise to 3+ 5 raise to 3
// digits of num

#include<stdio.h>
#include<stdbool.h>
int Power(int iNo1, int iNo2)
{

     int iMult=1;   //imp
    register int iCnt=0;
    for(iCnt=1; iCnt<=iNo2; iCnt++ )
    
    {
       iMult=iMult*iNo1; //base
    }

return iMult;
}

bool ChkArmstrong(int iNo)
{
   int iDigCnt=0;
   int iTemp=0;
   int iNo=0;
   int iSum=0;
   int iDigit=0;

   if(iNo<0 )
   {
     iNo=-iNo;
   }

   iTemp= iNo;         //value copy
                          // calc num of digits
   while(iNo!=0)
   {
     iDigCnt++;
     iNo= iNo/10;
   }
    
   iNo= iTemp;
   while(iNo!=0)
   {
       iDigit=iNo%10;
       //isum=isum+ Power(idigit, idigcnt);
       iNo=iNo/10;
   }
   if(iSum==iTemp)
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
    bool bRet;
    int iValue=0;

    printf("enter num :  \n");
    scanf("%d", &iValue);

    bRet=ChkArmstrong(iValue);
    if(bRet==true)
     {
       printf(" %d is armstrong\n ", iValue);
     }
     else
     {
       printf(" %d is not armstrong\n ", iValue);
     }


    return 0;
}