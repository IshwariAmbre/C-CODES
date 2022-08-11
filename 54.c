//check num is palindrome or not
//palindrome wow mam 151 
//check ahe so function is check

#include<stdio.h>   
#include<stdbool.h>

bool CheckPalindrome(int iValue)

{
   int iDigit=0;
   int iRev=0;
   int iTemp=0;

   if(iNo<0)
   {
       iNo=-iNo;
   }

   iTemp=iNo;// imp

   while(iNo>0)
   
  {
    iDigit= iNo%10;
    iRev=iRev*10+ iDigit;
    
    iNo=iNo/10;     
  }
  if(iRev==iTemp)
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
    scanf("%d", &iValue);     
       

    bRet= CheckPalindrome(iValue);

    if(bRet==true)
    {
          printf("%d palindrome  is:%d \n", ivalue);
    }
    else
    {
          printf("%d palindrome is not:%d \n", ivalue);
    }
    return 0;
}