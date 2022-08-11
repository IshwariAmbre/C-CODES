//armstrong while

#include<stdio.h>
#include<stdbool.h>

bool ChkArmstrong(int iNo)
{
   int iDigCnt=0;
   int iTemp=0;
   int iCnt=0;
   int iSum=0;
   int iMult=1;
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
       iMult=1;
       iDigit=iNo%10;
       for( iCnt=1; iCnt<=iDigCnt; iCnt++)
       {
           iMult= iMult*iDigit;
       }
           iSum=iSum+iMult;                             //isum=isum+ Power(idigit, idigcnt);
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